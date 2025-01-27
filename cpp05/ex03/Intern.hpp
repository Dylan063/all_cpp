/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:46:17 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/24 16:59:09 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"

class Intern{
  public : 
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();
    AForm* makeForm(const std::string nameForm,const std::string _cible);
    class notFound : public std::exception
    {
        const char *what() const throw();
    };
};

#endif