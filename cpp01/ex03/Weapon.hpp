/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:22 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/06 18:42:18 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _name;
public:
	void setName(std::string fname);
	const std::string getName();
	Weapon(std::string name);
	Weapon();
	~Weapon();
};

#endif