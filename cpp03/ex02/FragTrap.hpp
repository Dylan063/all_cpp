/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:40:12 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/26 10:19:12 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class   FragTrap : public ClapTrap{    
    public :
    FragTrap(const std::string &name);
    FragTrap &operator=(const FragTrap &other);
    FragTrap(const FragTrap &other);
    ~FragTrap();
    void highFivesGuys();
    void attackfrag(const std::string &target);
};

#endif