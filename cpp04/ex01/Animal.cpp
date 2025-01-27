/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:33 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:23:58 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "Animal";
    std::cout << "Animal constructor is created" << std::endl;
}


Animal::Animal(const Animal &anim) : type(anim.type){
    std::cout << "Animal constructor copy is created" << std::endl;
    
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal operator is created" << std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor is created" << std::endl;
}

void    Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}
