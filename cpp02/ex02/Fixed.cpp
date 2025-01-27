/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:43:58 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/11 16:10:47 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {};

Fixed::Fixed(int const value)
{

    this->_value = value * (1 << this->_scale);
};

Fixed::Fixed(float const value)
{

    this->_value = roundf(value * (1 << this->_scale));
};

Fixed::Fixed(const Fixed &copie)
{
    *this = copie;
}

Fixed::~Fixed(void) {};


std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

bool Fixed::operator<(const Fixed &rhs)
{

    return this->_value < rhs._value;
}

bool Fixed::operator>(const Fixed &rhs)
{

    return this->_value > rhs._value;
}

bool Fixed::operator<=(const Fixed &rhs)
{

    return this->_value <= rhs._value;
}

bool Fixed::operator>=(const Fixed &rhs)
{

    return this->_value >= rhs._value;
}

bool Fixed::operator==(const Fixed &rhs)
{

    return this->_value == rhs._value;
}

bool Fixed::operator!=(const Fixed &rhs)
{

    return this->_value != rhs._value;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{

    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed &rhs)
{

    Fixed tmp;
    tmp.setRawBits(this->_value + rhs._value);
    return tmp;
}

Fixed Fixed::operator-(const Fixed &rhs)
{

    Fixed tmp;
    tmp.setRawBits(this->_value - rhs._value);
    return tmp;
}

Fixed Fixed::operator*(const Fixed &rhs)
{

    Fixed tmp;
    tmp.setRawBits(this->_value * rhs._value / (1 << this->_scale));
    return tmp;
}

Fixed Fixed::operator/(const Fixed &rhs)
{

    Fixed tmp;
    tmp.setRawBits(this->_value * (1 << this->_scale) / rhs._value);
    return tmp;
}

Fixed &Fixed::operator++(void)
{

    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{

    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed &Fixed::operator--(void)
{

    this->_value++;
    return *this;
}

Fixed Fixed::operator--(int)
{

    Fixed tmp = *this;
    ++*this;
    return tmp;
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a._value < b._value ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a._value > b._value ? a : b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a._value < b._value ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a._value > b._value ? a : b);
}