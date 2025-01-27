/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:40:57 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/19 09:38:35 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cmath>
#include <stdint.h>

typedef struct Data
{
    int number;
}               s_data;

class Serializer{
    public :
    Serializer();
    ~Serializer();
    Serializer(const Serializer &fixed);
    Serializer &operator=(const Serializer &other);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif