/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:13:31 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 12:27:06 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor is created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong) : type(wrong.type){
    std::cout << "WrongAnimal constructor copy is created" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor is called" << std::endl;
}

void    WrongAnimal::makeSound() const{
    std::cout << "Wrong Animal Sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}