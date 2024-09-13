/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:10:01 by dravaono          #+#    #+#             */
/*   Updated: 2024/08/26 15:55:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>


class Contact{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _secret;
		std::string _phone;
	public:
		Contact();
		~Contact();
		void setFirstname(std::string fname);
		std::string getFirstname();

		void setLastname(std::string lname);
		std::string getLastname();

		void setNickname(std::string nname);
		std::string getNickname();

		void setSecret(std::string secr);
		std::string getSecret();

		void setPhone(std::string phon);
		std::string getPhone();

};

#endif