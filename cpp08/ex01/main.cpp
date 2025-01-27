/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:10:11 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/11 13:13:03 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(){
    try{
        Span theTab(300);
        std::srand(std::time(0));
        theTab.addNumber(12);
        theTab.addNumber(0);
        theTab.addNumber(50);
        theTab.addNumber(25);
        theTab.addNumber(40);
        theTab.multipleAddNumber_one(0, 200);
        for(int i = 0; i < theTab.returnIndex() ; i++){
            std::cout << theTab.getNumber(i) << std::endl;
        }
        std::cout << std::endl;
        std::cout << theTab.shortestSpan() << std::endl;
        std::cout << theTab.longestSpan() << std::endl;    
    }
    catch(std::exception &e){
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
