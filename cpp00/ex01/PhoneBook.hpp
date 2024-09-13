/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:09:13 by dravaono          #+#    #+#             */
/*   Updated: 2024/08/26 16:23:08 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <iomanip>
# include <iostream>
# include <string>
#include <cstdio>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int		_count;
		int		_max;
		Contact _contact[8];

	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		int	getMax();
		int	getCount();
		void	run(int nb);
		Contact* getContact();
};

std::string truncate(const std::string &str, std::size_t width);

#endif