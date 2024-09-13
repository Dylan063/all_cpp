/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:38 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/06 18:34:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanA
{
private:
	Weapon	&weapons;
	std::string _nameHuman;
public:
	void	attack();
	HumanA(std::string name, Weapon &myWeapon);
	~HumanA();
};


#endif