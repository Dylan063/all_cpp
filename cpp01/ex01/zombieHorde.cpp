/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:16:35 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/02 16:03:59 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	
	Zombie *zombie = new Zombie[N];

	for(int i = 0; i < N; i++){
		zombie[i] = Zombie(name);
	}
	return (zombie);
}