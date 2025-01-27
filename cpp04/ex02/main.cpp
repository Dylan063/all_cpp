/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:45:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:56:19 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *Animaltab[10];
	
	for(int i = 0; i < 10; i++){
		if (i < 10/2)
			Animaltab[i] = new Dog;
		else
			Animaltab[i] = new Cat;
	}
	for (int i = 0; i < 10; i++){
		delete Animaltab[i];
	}
	return 0;
}