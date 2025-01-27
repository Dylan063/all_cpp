/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:19:25 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/24 18:09:52 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class shrubberyCreationForm : public AForm
{
public:
    virtual void execute(const Bureaucrat &executor) const;
    shrubberyCreationForm(const std::string cible);
    shrubberyCreationForm(const shrubberyCreationForm &other);
    shrubberyCreationForm &operator=(const shrubberyCreationForm &other);
    ~shrubberyCreationForm();

private:
     std::string _cible;
};

#endif