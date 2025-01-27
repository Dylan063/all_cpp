/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:43:58 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/11 16:05:42 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{

    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{

    std::cout << "Int constructor called" << std::endl;
    this->_value = value * (1 << this->_scale);
}

Fixed::Fixed(float const value)
{

    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_scale));
}

Fixed::Fixed(const Fixed &copie)
{

    std::cout << "Copy constructor called" << std::endl;
    *this = copie;
}

Fixed::~Fixed(void)
{

    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{

    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{

    this->_value = raw;
}

float Fixed::toFloat(void) const
{

    return ((float)this->_value) / (1 << this->_scale);
}

int Fixed::toInt(void) const
{

    return (this->_value / (1 << this->_scale));
}