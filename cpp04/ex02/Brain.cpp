/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:10:58 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/01 09:22:20 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor is called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor is called" << std::endl;
}

Brain   &Brain::operator=(const Brain &other){
    if (this != &other){
        for(int i = 0; i < 100; i++){
            this->brain[i] = other.brain[i];
        }
    }
    std::cout << "Brain operator is called" << std::endl;
    return *this;
}

Brain::Brain(const Brain &other){
    for(int i = 0; i < 100; i++){
        this->brain[i] = other.brain[i];
    }
    std::cout << "Brain constructor copy is called" << std::endl;
}

