/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:06:32 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/06 18:29:49 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"


class HumanB
{
private:
	Weapon	*weapon;
	std::string _nameHuman;
public:
	void	attack();
	void setWeapon(Weapon &weapons);
	HumanB(std::string name);
	~HumanB();
};


#endif