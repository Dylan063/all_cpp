/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thisBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:52:35 by dravaono          #+#    #+#             */
/*   Updated: 2024/08/26 16:14:31 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _max(0) {}

PhoneBook::~PhoneBook()
{
	return ;
}

int	PhoneBook::getMax(){
	return (_max);
}

int	PhoneBook::getCount(){
	return (_count);
}

Contact* PhoneBook::getContact(){
	return (_contact);
}

void	PhoneBook::addContact(){
	Contact newContact;
	std::string temp;
	do{
		std::cout << "FIRST NAME : ";
		std::getline(std::cin, temp);
		newContact.setFirstname(temp);
		newContact.setFirstname(temp);
		if (std::cin.eof())
			exit (0);
	} while (newContact.getFirstname().empty());
		do{
			std::cout << "LAST NAME : ";
			std::getline(std::cin, temp);
			newContact.setLastname(temp);
			if (std::cin.eof())
				exit (0);
	} while (newContact.getLastname().empty());
		do{
			std::cout << "NICK NAME : ";
			std::getline(std::cin, temp);
			newContact.setNickname(temp);
			if (std::cin.eof())
				exit (0);
	} while (newContact.getNickname().empty());
			do{
			std::cout << "NUMBER : ";
			std::getline(std::cin, temp);
			newContact.setPhone(temp);
			if (std::cin.eof())
				exit (0);
	} while (newContact.getPhone().empty());
		do{
			std::cout << "DARK SECRET : ";
			std::getline(std::cin, temp);
			newContact.setSecret(temp);
	} while (newContact.getSecret().empty());
	getContact()[_count] = newContact;
	_count++;
	if (_count == 8){
		if (_max == 0){
			_max = 8;
		}
		_count = 0;
	}
}

void	PhoneBook::run(int nb)
{
	int verif = nb;

	while (1)
	{
		int selector;
		std::string cmd;
		std::string temp;
		std::cout << "ENTER ADD, SEARCH OR EXIT : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			exit(0);
		if (cmd == "ADD")
		{
			verif = 1;
			this->addContact();
			system("clear");
		}
		else if (cmd == "SEARCH" && verif == 1)
		{
			if (this->getMax() == 0)
			{
				for (int i = 0; i < this->getCount(); i++)
				{
					std::cout << i
						+ 1 << " | " << std::setw(10) << truncate(this->getContact()[i].getFirstname(), 10) << " | " << std::setw(10) << truncate(this->getContact()[i].getLastname(), 10) << " | " << std::setw(10) << truncate(this->getContact()[i].getNickname(), 10) << std::endl;
				}
			}
			else
			{
				for (int i = 0; i < 8; i++)
				{
					std::cout << i
						+ 1 << " | " << std::setw(10) << truncate(this->getContact()[i].getFirstname(), 10) << " | " << std::setw(10) << truncate(this->getContact()[i].getLastname(), 10) << " | " << std::setw(10) << truncate(this->getContact()[i].getNickname(), 10) << std::endl;
				}
			}
			selector = -1;

			while (1)
			{
				std::cout << "ENTER VALID INDEX : ";
				std::getline(std::cin, cmd);
				if (std::cin.eof())
					exit(0);
				selector = cmd[0] - 49;
				if (selector + 1 >= 1 && selector + 1 <= 8
					&& (this->getMax() == 8 || this->getCount() > selector))
					break ;
				std::cout << "WRONG INDEX" << std::endl;
			}
			system("clear");
			std::cout << "FIRST NAME : " << this->getContact()[selector].getFirstname() << std::endl;
			std::cout << "LAST NAME : " << this->getContact()[selector].getLastname() << std::endl;
			std::cout << "NICKNAME : " << this->getContact()[selector].getNickname() << std::endl;
			std::cout << "this : " << this->getContact()[selector].getPhone() << std::endl;
			std::cout << "DARK SECRET : " << this->getContact()[selector].getSecret() << std::endl;
			while (cmd != "BACK")
			{
				std::cout << "TYPE BACK TO GO BACK : ";
				std::cin >> cmd;
				if (std::cin.eof())
					exit(0);
			}
			system("clear");
		}
		else if (cmd == "EXIT")
		{
			exit(EXIT_FAILURE);
		}
		else if (verif == 0 && cmd == "SEARCH")
		{
			std::cout << "NEED 1 CONTACT TO SEARCH" << std::endl;
		}
		else
		{
			std::cout << "Unknown command" << std::endl;
		}
	}
}

std::string truncate(const std::string &str, std::size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}