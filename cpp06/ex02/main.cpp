/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:41:09 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 16:19:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string>
#include <iostream>

// int main() {
//         Base* instance = generate();
//         instance->identify(instance);
//         try {
//             instance->identify(*instance);
//         } catch (const std::bad_cast& e) {
//             std::cout << "Error cast : " << e.what() << std::endl;
//         }
//         delete instance;
//     return 0;
// }

int main() {
    std::srand(std::time(0));
    for (int i = 0; i < 5; ++i) {
        Base* instance = generate();
        std::cout << "Identification with pointer : ";
        instance->identify(instance);
        std::cout << "Identification with réf : ";
        try {
            instance->identify(*instance);
            std::cout << std::endl << std::endl;
        } catch (const std::bad_cast& e) {
            std::cout << "Error cast : " << e.what() << std::endl;
        }
        delete instance;
    }
    return 0;
}
