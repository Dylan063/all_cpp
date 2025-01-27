/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:47:08 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/13 19:00:19 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac == 2)    
        scalar::convert(av[1]);
    else
        std::cout << "need 1 arg" << std::endl;
    return 0 ;
}
