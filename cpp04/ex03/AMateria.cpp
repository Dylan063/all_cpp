/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:00:33 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/09 15:52:30 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type) : _Type(type){
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &other) : _Type(other._Type){
}

AMateria &AMateria::operator=(const AMateria &other){
    if (this != &other){
        this->_Type = other._Type;
    }
    return *this;
}

std::string const & AMateria::getType() const{
    return (this->_Type);
}

void AMateria::use(ICharacter& target){
    std::cout << "Materia type : " << this->_Type << "is used for " << target.getName() << std::endl;
}
