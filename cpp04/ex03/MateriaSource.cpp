/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:01:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/04 11:49:40 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _inventary[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventary[i])
        {
            delete _inventary[i];
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inventary[i])
            {
                delete _inventary[i];
            }
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

void MateriaSource::learnMateria(AMateria *materia)
{
    if (materia == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if(this->_inventary[i] == NULL){
            this->_inventary[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventary[i] != NULL && this->_inventary[i]->getType() == type)
        {
            return this->_inventary[i]->clone();
        }
    }
    return NULL;
}