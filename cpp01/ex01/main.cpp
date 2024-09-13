/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:55:27 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/12 17:44:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av){
	if (ac != 3)
		std::cout << "error arg" << std::endl;
	else
	{
		Zombie *zombiesss;

		int nb = atoi(av[1]);
		zombiesss = zombieHorde(nb,av[2]);
		for(int i = 0; i < nb; i++){
			zombiesss[i].announce();
		}
		delete[] zombiesss;
	}
	return (0);
}