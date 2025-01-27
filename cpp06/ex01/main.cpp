/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:21:41 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 16:13:09 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main(void){
    
    Data data = {42};
    uintptr_t serialized = Serializer::serialize(&data);
    Data* deserialized = Serializer::deserialize(serialized);

    if (&data == deserialized) 
        std::cout << "Test ok" << std::endl;
     else 
        std::cout << "Test fail" << std::endl;

    return 0;
}