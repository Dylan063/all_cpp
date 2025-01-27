/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:21:00 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/18 17:39:28 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFPRM_HPP
#define PRESIDENTIALPARDONFPRM_HPP

#include "AForm.hpp"

class presidentialPardonForm : public AForm{
    public : 
    virtual void execute(const Bureaucrat &executor) const;
    presidentialPardonForm();
    presidentialPardonForm(const presidentialPardonForm &other);
    presidentialPardonForm &operator=(const presidentialPardonForm &other);
    ~presidentialPardonForm();
    

    private : 
    std::string _cible;
};

#endif