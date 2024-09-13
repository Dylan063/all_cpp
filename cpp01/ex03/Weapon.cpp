/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:24 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/06 18:41:30 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name){	
}

Weapon::Weapon(){	
}

Weapon::~Weapon(){
}

const std::string Weapon::getName(){
	return (_name);
}

void	Weapon::setName(std::string reel_name){
	this->_name = reel_name;
}

