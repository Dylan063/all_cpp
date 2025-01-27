/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:46 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/01 11:33:25 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->Brainnn = new Brain;
    std::cout << "Cat constructor is created" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor is created" << std::endl;
    delete this->Brainnn;
}

Cat &Cat::operator=(const Cat &other){
    this->Brainnn = new Brain;
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &chat) : Animal(chat){
    this->Brainnn = new Brain(*chat.Brainnn);
    std::cout << "Cat constructor copy is created" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Miaouuuuw" << std::endl;
}