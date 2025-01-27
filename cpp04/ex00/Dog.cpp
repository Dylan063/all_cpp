/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   called: 2024/09/25 17:46:28 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 11:49:14 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog"; 
    std::cout << "Dog constructor is called" << std::endl;
}

Dog::~Dog(){ 
    std::cout << "Dog destructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog &chien) : Animal(chien){ 
    std::cout << "Dog constructor copy is called" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Waouuuuuuuf" << std::endl;
}
