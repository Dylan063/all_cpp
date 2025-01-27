/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:19:21 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/19 18:12:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


shrubbery::shrubbery() : AForm("Format", 13, 43), _cible("Arthur"){
}

shrubbery::~shrubbery(){
    
}

shrubbery::shrubbery(const shrubbery &other) : AForm(other), _cible(other._cible){
}

shrubbery &shrubbery::operator=(const shrubbery &other){
    if (this != &other){
        AForm::operator=(other);
        this->_cible = other._cible;
    }
    return *this;
}

void shrubbery::execute(const Bureaucrat &executor) const{
    if (!this->isSigned()) {
        throw AForm::NotSigned();
    }
    if (executor.getGrade() > this->getgradeExec()) {
        throw AForm::GradeTooLowException();
    }
    std::ofstream outfile((this->_cible + "_shruberry").c_str());
    if (outfile.is_open()){
        outfile << "         /\\         " << std::endl;
        outfile << "        /  \\        " << std::endl;
        outfile << "       /    \\       " << std::endl;
        outfile << "      /      \\      " << std::endl;
        outfile << "     /________\\     " << std::endl;
        outfile << "        ||||         " << std::endl;
        outfile << "        ||||         " << std::endl;
        outfile << "        ||||         " << std::endl;
	    outfile.close();
    }
}