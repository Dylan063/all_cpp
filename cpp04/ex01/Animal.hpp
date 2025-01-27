/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/01 10:48:22 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
    protected :
    std::string type;
    

    public :
    Animal();
    virtual ~Animal();
    Animal &operator=(const Animal &other);
    Animal(const Animal &anim);
    virtual void    makeSound() const;
    std::string getType() const;
};


#endif