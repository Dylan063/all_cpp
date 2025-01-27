/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:22:04 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 17:38:05 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, int length, void (*func)(T&)) {
    for (int i = 1; i < length; i++) {
        func(array[i]);
    }
}

void otherFunct(int& elem) {
    std::cout << elem << std::endl;
}

#endif