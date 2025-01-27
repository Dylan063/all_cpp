/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:28 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:55:55 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->Brainnn = new Brain;
    std::cout << "Dog constructor is created" << std::endl;
}

Dog::~Dog(){ 
    std::cout << "Dog destructor is created" << std::endl;
    delete this->Brainnn;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other)
    {
        if (this->Brainnn)
            delete this->Brainnn;    
        this->Brainnn = new Brain(*other.Brainnn);
        this->type = other.type;
    }
    return *this;
}

Dog::Dog(const Dog &chien) : AAnimal(chien){
    this->Brainnn = new Brain(*chien.Brainnn);
    std::cout << "Dog constructor copy is created" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Waouuuuuuuf" << std::endl;
}
