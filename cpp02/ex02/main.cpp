/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:54:00 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/11 16:54:04 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main()
// {
//     Fixed a;
//     Fixed b(10);
//     Fixed c(42.42f);
//     Fixed d(b);

//     std::cout << "a is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "c is " << c << std::endl;
//     std::cout << "d is " << d << std::endl;

//     std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//     std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//     std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//     std::cout << "d is " << d.toInt() << " as integer" << std::endl;

//     std::cout << "a + b is " << (a + b) << std::endl;
//     std::cout << "b - a is " << (b - a) << std::endl;
//     std::cout << "a * b is " << (a * b) << std::endl;
//     std::cout << "c / b is " << (c / b) << std::endl;

//     std::cout << "a > b is " << (a > b) << std::endl;
//     std::cout << "a < b is " << (a < b) << std::endl;
//     std::cout << "a >= b is " << (a >= b) << std::endl;
//     std::cout << "a <= b is " << (a <= b) << std::endl;
//     std::cout << "a == b is " << (a == b) << std::endl;
//     std::cout << "a != b is " << (a != b) << std::endl;

//     std::cout << "Pre-increment a: " << ++a << std::endl;
//     std::cout << "Post-increment a: " << a++ << std::endl;
//     std::cout << "a after post-increment: " << a << std::endl;

//     std::cout << "Pre-decrement a: " << --a << std::endl;
//     std::cout << "Post-decrement a: " << a-- << std::endl;
//     std::cout << "a after post-decrement: " << a << std::endl;

//     std::cout << "Min between b and c: " << Fixed::min(b, c) << std::endl;
//     std::cout << "Max between b and c: " << Fixed::max(b, c) << std::endl;

//     return 0;
// }

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}