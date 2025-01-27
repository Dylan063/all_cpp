/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:40:15 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/25 16:14:37 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name) {
    _name = Name;
    this->_Life = 100;
    this->_Attack = 20;
    this->_Energy = 50;
    std::cout << "FragTrap constructor is created for " << Name << std::endl;
}

FragTrap::FragTrap(const FragTrap &trap) : ClapTrap(trap) {
    std::cout << "FragTrap copy constructor is created for " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &trap) {
    std::cout << "FragTrap constructor operator is created" << std::endl;
    if (this != &trap) {
        ClapTrap::operator=(trap);
        this->_Life = trap._Life;
        this->_Attack = trap._Attack;
        this->_Energy = trap._Energy;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor is called for " << this->_name << std::endl;
}

void FragTrap::attackfrag(const std::string &target) {
    if (!this->_Energy) {
        std::cout << "FragTrap " << this->_name << " needs energy!" << std::endl;
    } else {
        this->_Energy -= 1;
        std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_Attack << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    std::cout << "High Five !" << std::endl;
}