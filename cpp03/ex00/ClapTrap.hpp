/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:09:15 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/23 12:50:16 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    unsigned int _Life;
    unsigned int _Energy;
    unsigned int _Attack;
     std::string _name;

public:
    ClapTrap &operator=(const ClapTrap &trap);
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &trap);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif