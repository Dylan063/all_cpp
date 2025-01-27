/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   called: 2024/09/25 17:46:46 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 11:49:14 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    type = "Cat"; 
    std::cout << "Cat constructor is called" << std::endl;
}

Cat::~Cat(){ 
    std::cout << "Cat destructor is called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    this->type = other.type;
    return *this;
}

Animal &Animal::operator=(const Animal &other){
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &chat) : Animal(chat){ 
    std::cout << "Cat constructor copy is called" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Miaouuuuw" << std::endl;
}