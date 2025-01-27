/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:01:46 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/18 20:04:20 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <map>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <stdexcept>
#include <sstream>
#include <climits>

class bitcoinExchange
{
private:
    std::map<std::string, double> tab;

public:
    bitcoinExchange(const std::string &path);
    ~bitcoinExchange();
    bitcoinExchange(const bitcoinExchange &other);
    bitcoinExchange &operator=(const bitcoinExchange &other);
    void parsingFile();
    double compareFile(const std::string &goodFormat);
    void checkInputFile(const std::string &path);
    void printFile();
    void fileToMap(const std::string &path);
    class problemFile : public ::std::exception
    {
    public:
        const char *what() const throw()
        {
            return "File can't open";
        }
    };
};

#endif