/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:00:16 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/24 18:13:15 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name) {
    _name = Name;
    this->_Life = 100;
    this->_Attack = 20;
    this->_Energy = 50;
    std::cout << "ScavTrap constructor is created for " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &trap) : ClapTrap(trap) {
    std::cout << "ScavTrap copy constructor is created for " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &trap) {
    std::cout << "ScavTrap constructor operator is created" << std::endl;
    if (this != &trap) {
        ClapTrap::operator=(trap);
        this->_Life = trap._Life;
        this->_Attack = trap._Attack;
        this->_Energy = trap._Energy;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor is called for " << this->_name << std::endl;
}

void ScavTrap::attackscav(const std::string &target) {
    if (!this->_Energy) {
        std::cout << "ScavTrap " << this->_name << " needs energy!" << std::endl;
    } else {
        this->_Energy -= 1;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_Attack << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode!" << std::endl;
}