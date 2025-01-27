/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:14:23 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/16 16:45:27 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getlevel(std::string level){
    std::string levelsss[4];
    levelsss[0] = "DEBUG";
    levelsss[1] = "INFO";
    levelsss[2] = "WARNING";
    levelsss[3] = "ERROR";
    int i = 0;
    while(levelsss[i] != level){
        i++;
    }
    return (i + 1);
}

int main(void){
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}