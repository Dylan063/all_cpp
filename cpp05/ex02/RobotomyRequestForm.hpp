/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:21:20 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/22 14:53:07 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class robot : public AForm
{
public:
    virtual void execute(const Bureaucrat &executor) const;
    robot();
    robot(const robot &other);
    robot &operator=(const robot &other);
    ~robot();

private:
     std::string _cible;
};

#endif