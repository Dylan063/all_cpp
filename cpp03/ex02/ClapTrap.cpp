/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:09:17 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/24 16:22:42 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string Name) : _Life(10), _Energy(10), _Attack(0),  _name(Name){
    std::cout << "ClapTrap constructor is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap) : _Life(trap._Life), _Energy(trap._Energy), _Attack(trap._Attack),  _name(trap._name){
    std::cout << "ClapTrap constructor copy is created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &trap){
    std::cout << "ClapTrap constructor operator is created" << std::endl;
    if (trap._name.size()){
        this->_name = trap._name;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor is called" << std::endl;
}

void    ClapTrap::attack(const std::string &name){
    if (!this->_Energy){
        std::cout << "need energy" << std::endl;
    }
    else{
        this->_Energy -= 1;
        std::cout << "ClapTrap " << this->_name << " attacks " << name << " causing " << this->_Attack << " points of damage!" << std::endl;
    } 
}

void ClapTrap::beRepaired(unsigned int amount){
    long long max = this->_Life + amount;
    if (!this->_Energy){
        std::cout << "need energy" << std::endl;
        return ;
    }
    if (max < 100)
    {
        this->_Energy -= 1;
        this->_Life += amount;
        std::cout << "+ " << amount << " life points" << std::endl;
        std::cout << this->_Life << " life points" << std::endl;    
    }
    else   
        std::cout << "life is full" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (!this->_Life)
        std::cout << this->_name << " is already dead " << std::endl;
    else if (amount <= this->_Life)
    {
        this->_Life -= amount;
        std::cout << this->_name << " take " << amount << " damage " << std::endl;
        if (!this->_Life)
            std::cout << this->_name << " is dead " << std::endl;
    }
    else{
        this->_Life = 0;
        std::cout << this->_name << " is dead " << std::endl;
    }
}
