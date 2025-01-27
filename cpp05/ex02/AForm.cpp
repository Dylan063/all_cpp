/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:01:53 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/19 16:50:02 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, int gradeSign, int gradeExec) : _Name(name), _Signed(false), _gradeExec(gradeExec), _gradeSign(gradeSign) {
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

AForm::~AForm(){
    
}

AForm::AForm(const AForm &other) : _Name(other._Name), _Signed(other._Signed), _gradeExec(other._gradeExec), _gradeSign(other._gradeSign){
    
}

AForm    &AForm::operator=(const AForm &other){
    if (this != &other)
        this->_Signed = other._Signed;
    return *this;
}

bool AForm::isSigned() const{
    return this->_Signed;
}

int AForm::getgradeExec() const{
    return this->_gradeExec;
}

int AForm::getgradeSign() const{
    return this->_gradeSign;
}

std::string AForm::getName() const{
    return this->_Name;
}

std::ostream &operator<<(std::ostream &os, const AForm &myObj)
{
    os << "Name AForm : " << myObj.getName() << std::endl;
    os << "Grade required for sign : " <<  myObj.getgradeSign() << std::endl; 
    os << "Grade required for exec : " << myObj.getgradeExec() << std::endl;
    return (os);
}

void    AForm::beSigned(const Bureaucrat &bureau){
    if (bureau.getGrade() <= this->getgradeSign())
        this->_Signed = true;
    else
        throw(GradeTooLowException());
}

const char* AForm::GradeTooHighException::what() const throw(){
    return("the grade is too high for the AForm");
}

const char* AForm::GradeTooLowException::what() const throw(){
    return("the grade is too low for the AForm");
}

const char* AForm::NotSigned::what() const throw(){
    return("the AForm is not signed");
}