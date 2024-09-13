/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:54:31 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/12 16:37:05 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce();
};

	Zombie* zombieHorde(int N, std::string name);



#endif