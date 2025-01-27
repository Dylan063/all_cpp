/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:41:03 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/19 09:22:37 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer(){
    
}

Serializer::~Serializer(){
    
}

Serializer::Serializer(const Serializer &other){
    *this = other;
}

Serializer &Serializer::operator=(const Serializer &other){
    if (this != &other){
        *this = other;
    }
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t memory;
    memory = reinterpret_cast<uintptr_t>(ptr);
    return memory;
}

Data* Serializer::deserialize(uintptr_t raw){
    Data* serial;

    serial = reinterpret_cast<Data*>(raw);
    return serial;
}
