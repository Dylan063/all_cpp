/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:47:03 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/02 09:55:25 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
    public : 
    Cat();
    ~Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat &anim);
    void    makeSound() const;

    private :
    Brain *Brainnn;

};

#endif