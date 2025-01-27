/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:20 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/25 17:05:55 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    if (this != &other)
        *this = other;
    return *this;
}

AForm *Intern::makeForm(const std::string nameForm, const std::string _cible)
{
    std::string tab[3] = {"presidentialPardonForm", "robotomyRequestForm", "shrubberyCreationForm"};
    int i = -1;
    while (++i < 3)
       if (tab[i] == nameForm)
        break;
    AForm *tmp = NULL;
    switch (i)
    {
    case 0:
        tmp = new presidentialPardonForm(_cible);
        std::cout << "Intern creates " << _cible << std::endl;
        break;
    case 1:
        tmp = new RobotomyRequestForm(_cible);
        std::cout << "Intern creates " << _cible << std::endl;
        break;
    case 2:
        tmp = new shrubberyCreationForm(_cible);
        std::cout << "Intern creates " << _cible << std::endl;
        break;
    default:
        std::cout << "form name passed as parameter doesn’t exist" << std::endl;
        break;
    }
    return tmp;
}