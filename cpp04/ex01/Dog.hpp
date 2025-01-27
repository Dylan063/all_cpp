/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:46:51 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/01 10:51:34 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public :
    Dog();
    ~Dog();
    Dog &operator=(const Dog &other);
    Dog(const Dog &anim);
    void    makeSound() const;

    private :
    Brain *Brainnn;
};

#endif