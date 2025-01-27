/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:47:03 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 11:49:14 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public : 
    Cat();
    ~Cat();
    Cat &operator=(const Cat &other);
    Cat(const Cat &anim);
    void    makeSound() const;
};

#endif