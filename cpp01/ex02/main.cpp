/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:41:38 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/02 16:49:54 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *PTR = &str;
	std::string &REF = str;

	std::cout << "Adress string = " << &str << std::endl;
	std::cout << "Adress strPTR = " << &PTR << std::endl;
	std::cout << "Adress strREF = " << &REF << std::endl;
	std::cout << "Value string = " << str << std::endl;
	std::cout << "Value strPTR = " << *PTR << std::endl;
	std::cout << "Value strREF = " << REF << std::endl;
}