/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:15:24 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/16 16:45:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "iostream"
#include "string"

class   Harl{
    private :
    void debug();
    void info();
    void warning();
    void error();

    public :
    Harl();
    ~Harl();
    void complain(std::string level);
};
int getlevel(std::string level);

#endif