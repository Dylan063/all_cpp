/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:55:31 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/24 16:04:12 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap{    
    public :
    ScavTrap(const std::string &name);
    ScavTrap &operator=(const ScavTrap &other);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();
    void guardGate();
    void attackscav(const std::string &target);
};

#endif