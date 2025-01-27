/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:01:53 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/09 18:47:07 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int gradeSign, int gradeExec) : _Name(name), _Signed(false), _gradeExec(gradeExec), _gradeSign(gradeSign) {
    if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
}

Form::~Form(){
    
}

Form::Form(const Form &other) : _Name(other._Name), _Signed(other._Signed), _gradeExec(other._gradeExec), _gradeSign(other._gradeSign){
    
}

Form    &Form::operator=(const Form &other){
    if (this != &other)
        this->_Signed = other._Signed;
    return *this;
}

bool Form::isSigned() const{
    return this->_Signed;
}

int Form::getgradeExec() const{
    return this->_gradeExec;
}

int Form::getgradeSign() const{
    return this->_gradeSign;
}

std::string Form::getName() const{
    return this->_Name;
}

std::ostream &operator<<(std::ostream &os, const Form &myObj)
{
    os << "Name form : " << myObj.getName() << std::endl;
    os << "Grade required for sign : " <<  myObj.getgradeSign() << std::endl; 
    os << "Grade required for exec : " << myObj.getgradeExec() << std::endl;
    return (os);
}

void    Form::beSigned(const Bureaucrat &bureau){
    if (bureau.getGrade() <= this->getgradeSign())
        this->_Signed = true;
    else
        throw(GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw(){
    return("the grade is too high for the form");
}

const char* Form::GradeTooLowException::what() const throw(){
    return("the grade is too low for the form");
}

