/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:13:39 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 12:26:53 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
    protected :
    std::string type;

    public :
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &wrong);
    WrongAnimal(const WrongAnimal &wrong);
    std::string getType() const;
    void    makeSound() const;
};


#endif