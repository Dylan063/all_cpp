/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:21:08 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/19 17:36:51 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


presidentialPardonForm::presidentialPardonForm() : AForm("Format", 13, 43), _cible("Arthur"){
}

presidentialPardonForm::~presidentialPardonForm(){
    
}

presidentialPardonForm::presidentialPardonForm(const presidentialPardonForm &other) : AForm(other), _cible(other._cible){
}

presidentialPardonForm &presidentialPardonForm::operator=(const presidentialPardonForm &other){
    if (this != &other){
        AForm::operator=(other);
        this->_cible = other._cible;
    }
    return *this;
}

void presidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->isSigned()) {
        throw AForm::NotSigned();
    }
    if (executor.getGrade() > this->getgradeExec()) {
        throw AForm::GradeTooLowException();
    }
    std::cout << this->_cible << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
