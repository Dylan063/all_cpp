/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:43:51 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/11 16:11:47 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{

    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copie)
{

    std::cout << "Copy constructor called" << std::endl;
    *this = copie;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{

    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed::~Fixed(void)
{

    std::cout << "Destructor called" << std::endl;
}
