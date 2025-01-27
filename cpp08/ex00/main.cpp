/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:06:39 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/09 15:24:54 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        vec.push_back(50);
        std::cout << "Testing with std::vector<int>:" << std::endl;
        int foundValue = easyfind(vec, 30);
        std::cout << "Found value: " << foundValue << std::endl;
        foundValue = easyfind(vec, 60);
        std::cout << "Found value: " << foundValue << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(15);
        lst.push_back(25);
        lst.push_back(35);
        lst.push_back(45);
        std::cout << "\nTesting with std::list<int>:" << std::endl;
        int foundValue = easyfind(lst, 25);
        std::cout << "Found value: " << foundValue << std::endl;
        foundValue = easyfind(lst, 100); 
        std::cout << "Found value: " << foundValue << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
