/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:43:58 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/11 16:12:21 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{

public:
  Fixed(void);
  Fixed(const Fixed &copie);
  ~Fixed(void);

  Fixed &operator=(const Fixed &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);

private:
  int _value;
  static const int _fix = 8;
};

#endif