/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:13:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 12:22:44 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat"; 
    std::cout << "WrongCat constructor is created" << std::endl;
}

WrongCat::~WrongCat(){ 
    std::cout << "WrongCat destructor is created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    this->type = other.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &chat) : WrongAnimal(chat){ 
    std::cout << "WrongCat constructor copy is created" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "Miaouuuuw" << std::endl;
}