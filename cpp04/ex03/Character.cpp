/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:04:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/03 09:30:55 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) : _Name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventary[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventary[i] != NULL)
        {
            delete this->_inventary[i];
        }
    }
    for (size_t i = 0; i < this->tabMateriaSupp.size(); i++)
    {
        delete this->tabMateriaSupp[i];
    }
}

Character::Character(const Character &other) : _Name(other._Name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventary[i])
        {
            this->_inventary[i] = other._inventary[i]->clone();
        }
        else
        {
            this->_inventary[i] = NULL;
        }
    }
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        _Name = other._Name;
        for (int i = 0; i < 4; ++i)
        {
            delete _inventary[i];
            _inventary[i] = NULL;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (other._inventary[i])
            {
                _inventary[i] = other._inventary[i]->clone();
            }
            else
            {
                _inventary[i] = NULL;
            }
        }
    }
    return *this;
}

const std::string &Character::getName() const
{
    return (this->_Name);
}

void Character::equip(AMateria *materia)
{
    if (materia == NULL)
        return;
    for (int i = 0; i < 4; ++i)
    {
        if (_inventary[i] == NULL)
        {
            _inventary[i] = materia;
            return;
        }
    }
    tabMateriaSupp.push_back(materia);
}

void Character::unequip(int idx)
{
    if (idx <= 3 && this->_inventary[idx] != NULL)
    {
        tabMateriaSupp.push_back(_inventary[idx]);
        this->_inventary[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventary[idx] != NULL)
    {
        _inventary[idx]->use(target);
    }
}
