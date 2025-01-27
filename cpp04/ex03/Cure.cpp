/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:42:15 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/04 11:14:49 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}