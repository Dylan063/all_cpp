/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:19:25 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/19 17:43:30 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class shrubbery : public AForm
{
public:
    virtual void execute(const Bureaucrat &executor) const;
    shrubbery();
    shrubbery(const shrubbery &other);
    shrubbery &operator=(const shrubbery &other);
    ~shrubbery();

private:
     std::string _cible;
};

#endif