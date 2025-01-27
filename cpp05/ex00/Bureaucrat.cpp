/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:02:39 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/20 19:54:01 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
    if (grade < 1 )
        throw(GradeTooHighException());
    if (grade > 150)
        throw(GradeTooLowException());
}

Bureaucrat::~Bureaucrat(){
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade){
   
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    this->_grade = other._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &myObj)
{
    os << "His grade : " <<  myObj.getGrade() << std::endl; 
    os << "His name : " << myObj.getName() << std::endl;
    return (os);
}

void    Bureaucrat::DecrementGrade(){
    if (this->_grade <= 149)
        this->_grade += 1;
    else
        throw(GradeTooLowException());
}

void    Bureaucrat::IncrementGrade(){
    if (this->_grade > 1)
        this->_grade -= 1;
    else
        throw(GradeTooHighException());
}

std::string Bureaucrat::getName() const{
    return this->_name;
}

int Bureaucrat::getGrade() const{
    return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return("The grade is too big");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return("The grade is too low");
}