/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:42:25 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/04 10:47:48 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    virtual ~Ice();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif
