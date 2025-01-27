/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:33 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:24:49 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(){
    type = "Animal";
    std::cout << "Animal constructor is created" << std::endl;
}


AAnimal::AAnimal(const AAnimal &anim) : type(anim.type){
    std::cout << "Animal constructor copy is created" << std::endl;
    
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal operator is created" << std::endl;
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "Animal destructor is created" << std::endl;
}
void    AAnimal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

std::string AAnimal::getType() const{
    return (this->type);
}
