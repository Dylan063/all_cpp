/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:22:24 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal{
    protected :
    std::string type;
    

    public :
    AAnimal();
    AAnimal &operator=(const AAnimal &other);
    AAnimal(const AAnimal &anim);
    virtual ~AAnimal();
    virtual void    makeSound() const = 0;
    std::string getType() const;
};


#endif