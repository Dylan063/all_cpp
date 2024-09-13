/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:40 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/12 17:41:28 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &myWeapon) : weapons(myWeapon), _nameHuman(name){
	
}

HumanA::~HumanA(){
	
}

void HumanA::attack()
{
	std::cout << _nameHuman << " attack with their " << weapons.getName() << std::endl;
}
