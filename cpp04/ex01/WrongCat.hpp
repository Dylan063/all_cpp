/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:14:09 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 12:52:15 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    protected :
    std::string type;

    public : 
    WrongCat();
    ~WrongCat();
    WrongCat &operator=(const WrongCat &other);
    WrongCat(const WrongCat &chat);
    void    makeSound() const;
};


#endif