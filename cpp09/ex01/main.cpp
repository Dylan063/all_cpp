/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:22:45 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/24 16:14:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    if (ac == 2){
        try{
            RPN test;
            std::cout << test.functionRPN(av[1]) << std::endl;
        }catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}