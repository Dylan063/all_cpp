/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:01:45 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/10 18:24:42 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
    std::string _Name;
    bool _Signed;
    const int _gradeExec;
    const int _gradeSign;

public:
    AForm(const std::string name, int Gradesign, int Gradeexec);
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);
    ~AForm();

    void beSigned(const Bureaucrat &bureau);
    virtual void execute(const Bureaucrat &executor) const = 0;

    int getgradeExec() const;
    int getgradeSign() const;
    std::string getName() const;
    bool isSigned() const;

    class NotSigned : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const AForm &myObj);

#endif