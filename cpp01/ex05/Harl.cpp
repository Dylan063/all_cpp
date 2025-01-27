/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:15:13 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/16 16:45:00 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    std::cout << "Harl is created" << std::endl;
}

Harl::~Harl(){
    std::cout << "Harl is destroyed" << std::endl;
}

void    Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){
    switch (getlevel(level))
    {
    case 1:
        this->debug();
        break;
    case 2:
        this->info();
        break;
    case 3:
        this->warning();
        break;
    case 4:
        this->error();
        break;
    default:
        break;
    }
}