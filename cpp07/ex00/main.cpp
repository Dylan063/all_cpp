/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:51:41 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/22 14:13:16 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whathever.hpp"
#include <iostream>

int main(){
    int a = 5;
    int b = 10;
    
    swap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    int x = min(a, b);
    std::cout << x << std::endl;
    int y = max(a, b);
    std::cout << y << std::endl;
}
