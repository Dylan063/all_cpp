/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:09:20 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/25 17:43:03 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("Scavvy");
    scav1.attackscav("target1");
    scav1.guardGate();
    scav1.beRepaired(30);
    scav1.takeDamage(50);
    scav1.takeDamage(60);

    std::cout << "\nTesting ScavTrap copy constructor:\n";
    ScavTrap scav2(scav1);

    std::cout << "\nTesting ScavTrap assignment operator:\n";
    ScavTrap scav3("AnotherScav");
    scav3 = scav1;

    std::cout << "\nTesting ClapTrap functionality:\n";
    ClapTrap clap1("Clappy");
    clap1.attack("target2");
    clap1.beRepaired(20);
    clap1.takeDamage(15);

    std::cout << "\nTesting ClapTrap assignment operator:\n";
    ClapTrap clap2("AnotherClappy");
    clap2 = clap1;

    return 0;
}