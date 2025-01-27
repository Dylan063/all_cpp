/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:33 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/28 17:07:07 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "Animal";
    std::cout << "Animal constructor is called" << std::endl;
}


Animal::Animal(const Animal &anim) : type(anim.type){
    std::cout << "Animal constructor copy is called" << std::endl;
    
}

Animal::~Animal(){
    std::cout << "Animal destructor is called" << std::endl;
}

void    Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}
