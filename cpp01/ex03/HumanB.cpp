/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:35 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/06 18:55:16 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _nameHuman(name){	
}

HumanB::~HumanB(){
	
}

void HumanB::attack()
{
	std::cout << this->_nameHuman << " attack with their " << weapon->getName() << std::endl;
}

void	HumanB::setWeapon(Weapon &myWeapon)
{
	weapon = &myWeapon;
}