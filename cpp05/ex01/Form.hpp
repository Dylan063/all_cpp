/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:01:45 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/09 17:27:49 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    std::string _Name;
    bool _Signed;
    const int _gradeExec;
    const int _gradeSign;

public:
    Form(const std::string name, int Gradesign, int Gradeexec);
    Form(const Form &other);
    Form &operator=(const Form &other);
    ~Form();
    void beSigned(const Bureaucrat &bureau);

    int getgradeExec() const;
    int getgradeSign() const;
    std::string getName() const;
    bool isSigned() const;
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const Form &myObj);

#endif