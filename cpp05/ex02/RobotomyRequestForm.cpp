/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:21:16 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/22 17:09:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>
#include <cstdlib>

robot::robot() : AForm("Format", 13, 43), _cible("Arthur")
{
}

robot::~robot()
{
}

robot::robot(const robot &other) : AForm(other), _cible(other._cible)
{
}

robot &robot::operator=(const robot &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->_cible = other._cible;
    }
    return *this;
}

void robot::execute(const Bureaucrat &executor) const
{
    if (!this->isSigned())
    {
        throw AForm::NotSigned();
    }
    if (executor.getGrade() > this->getgradeExec())
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << ">...some drilling noises...<" << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2 == 1)
    {
        std::cout << "Robotomy failed..." << std::endl;
    }
    else
    {
        std::cout << this->_cible << " has been robotomized successfully" << std::endl;
    }
}
