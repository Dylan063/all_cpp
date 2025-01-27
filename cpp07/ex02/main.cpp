/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:21:53 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/27 14:09:47 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates_three.hpp"

int main() {
    try {
        Array<int> arr1;
        std::cout << "Taille de arr1 : " << arr1.size() << std::endl;
        unsigned int taille = 5;
        Array<int> arr2(taille);
        std::cout << "Taille de arr2 : " << arr2.size() << std::endl;
        for (unsigned int i = 0; i < arr2.size(); i++) {
            arr2[i] = i * 10;
        }
        std::cout << "Contenu de arr2 : ";
        for (unsigned int i = 0; i < arr2.size(); i++) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;

        Array<int> arr3(arr2);
        std::cout << "Contenu de arr3 (copie de arr2) : ";
        for (unsigned int i = 0; i < arr3.size(); i++) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;
        arr2[0] = 999;
        std::cout << "Modification arr2[0] = 999" << std::endl;
        std::cout << "Contenu de arr2 : ";
        for (unsigned int i = 0; i < arr2.size(); i++) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Contenu de arr3 (après modification de arr2) : ";
        for (unsigned int i = 0; i < arr3.size(); i++) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;
        Array<int> arr4;
        arr4 = arr2;
        std::cout << "Contenu de arr4 (après affectation de arr2) : ";
        for (unsigned int i = 0; i < arr4.size(); i++) {
            std::cout << arr4[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Tentative d'accès à arr2[10] (hors limites)..." << std::endl;
        std::cout << arr2[10] << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}