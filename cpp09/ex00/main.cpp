/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:27:20 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/19 19:07:54 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if (ac == 2){
        try{
            bitcoinExchange test(av[1]);
            test.fileToMap("data.csv");
            test.parsingFile();
            test.checkInputFile(av[1]);
        }
        catch(std::exception &e){
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}
