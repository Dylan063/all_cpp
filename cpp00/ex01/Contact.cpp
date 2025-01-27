/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:51:12 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/17 15:19:22 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
std::string Contact::getFirstname()
{
	return (_firstname);
}

void Contact::setFirstname(std::string fname)
{
	this->_firstname = fname;
}

std::string Contact::getLastname()
{
	return (_lastname);
}

void Contact::setLastname(std::string lname)
{
	this->_lastname = lname;
}

std::string Contact::getNickname()
{
	return (_nickname);
}

void Contact::setNickname(std::string nname)
{
	this->_nickname = nname;
}

std::string Contact::getPhone()
{
	return (_phone);
}

void Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

std::string Contact::getSecret()
{
	return (_secret);
}

void Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

