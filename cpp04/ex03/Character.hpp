/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:40:27 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/03 09:35:37 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <vector>
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _Name;
    AMateria *_inventary[4];
    std::vector<AMateria *> tabMateriaSupp;

public:
    Character(std::string const &name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    virtual ~Character();

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif
