/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:49:02 by dravaono          #+#    #+#             */
/*   Updated: 2024/08/30 16:05:11 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
  public:
			Zombie(std::string name);
			~Zombie();
			void announce();

  private:
			std::string _name;
};
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);