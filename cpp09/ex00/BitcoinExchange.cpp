/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:01:49 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/09 15:57:12 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

bitcoinExchange::bitcoinExchange(const std::string& path){
    std::ifstream file(path.c_str());
    if (!file.is_open())
        throw(problemFile());
}

bitcoinExchange::~bitcoinExchange(){
}

bitcoinExchange::bitcoinExchange(const bitcoinExchange &other){
    this->tab = other.tab;
}

bitcoinExchange &bitcoinExchange::operator=(const bitcoinExchange &other){
    if (this != &other)
        this->tab = other.tab;
    return *this;
}

void    bitcoinExchange::fileToMap(const std::string &path){
    std::ifstream file(path.c_str());
    if (!file.is_open()) {
        throw(problemFile());
    }
    else{
        std::string str;
        std::string key;
        std::string value_str;
        while (std::getline(file, str)){
            size_t it_sfind = str.find(',');
            if (it_sfind == std::string::npos){
                std::cout << "lign is not good" << std::endl;
                continue;
            }
            key = str.substr(0, it_sfind);
            value_str = str.substr(it_sfind + 1);
            std::istringstream iss(value_str);
            double value = strtod(value_str.c_str(), NULL);
            if (value >= 0)
                this->tab[key] = value;
            else
                std::cout << "value is not available" << std::endl;
        }
    }
}

void    bitcoinExchange::printFile(){
    std::ostringstream buffer;
    for(std::map<std::string, double>::iterator it = tab.begin(); it != tab.end(); ++it){
        buffer << it->first << " => " << it->second << std::endl;
    }
    std::cout << buffer.str();
}

void bitcoinExchange::parsingFile() {
    for (std::map<std::string, double>::iterator it = tab.begin(); it != tab.end(); ) {
        std::string str = it->first;
        if (str.size() < 10 || str[4] != '-' || str[7] != '-') {
            std::cout << "Error: Invalid date format => " << str << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        std::string yearStr = str.substr(0, 4);
        std::string monthStr = str.substr(5, 2);
        std::string dayStr = str.substr(8, 2);
        int year = atoi(yearStr.c_str());
        int month = atoi(monthStr.c_str());
        int day = atoi(dayStr.c_str());
        if (year < 2009 || year > 2022) {
            std::cout << "Error: Year => " << str << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        if (month < 1 || month > 12) {
            std::cout << "Error: Invalid month => " << str << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        if (day < 1 || day > 31) {
            std::cout << "Error: Invalid day => " << str << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            std::cout << "Error: Day exceeds  => " << str << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        if (month == 2) {
            if ((year % 4 == 0) && day > 29) {
                std::cout << "Error: Day exceeds for february => " << str << std::endl;
                std::map<std::string, double>::iterator next = it;
                ++next;
                tab.erase(it);
                it = next;
                continue;
            } else if ((year % 4 != 0) && day > 28) {
                std::cout << "Error: Day exceeds for february => " << str << std::endl;
                std::map<std::string, double>::iterator next = it;
                ++next;
                tab.erase(it);
                it = next;
                continue;
            }
        }
        if (it->second < 0){
            std::cout << "Error: value incorrect => " << it->second << std::endl;
            std::map<std::string, double>::iterator next = it;
            ++next;
            tab.erase(it);
            it = next;
            continue;
        }
        ++it;
    }
}

double bitcoinExchange::compareFile(const std::string &goodFormat){
    size_t separatorPos = goodFormat.find(" | ");
    std::string date = goodFormat.substr(0, separatorPos);
    std::string valueStr = goodFormat.substr(separatorPos + 3);
    double value = atof(valueStr.c_str());
    std::map<std::string, double>::iterator it = tab.lower_bound(date);
    if (it == tab.begin() && it->first != date)
        return -1.0;
    if (it == tab.end() || it->first != date) {
        if (it != tab.begin()) {
            --it;
        }
    }
    return value * it->second;
}

void    bitcoinExchange::checkInputFile(const std::string &path){
    std::ifstream file(path.c_str());
    if (!file.is_open()) {
        throw(problemFile());
    }
    else{
        std::string str;
        std::getline(file, str);
        if(str != "date | value"){
            throw(problemFile());
        } else{
            while(std::getline(file, str)){
                if (str.size() < 14) {
                    std::cout << "Error: bad input => " << str << std::endl;
                    continue;
                }
                if (str[4] != '-' || str[7] != '-' || str[10] != ' ' || str[11] != '|' || str[12] != ' '){
                    std::cout << "Error : not good format => " << str << std::endl;
                    continue;
                }
                std::string yearStr = str.substr(0, 4);
                std::string monthStr = str.substr(5, 2);
                std::string dayStr = str.substr(8, 2);
                int year = atoi(yearStr.c_str());
                int month = atoi(monthStr.c_str());
                int day = atoi(dayStr.c_str());
                if (year < 2009 || year > 2022) {
                    std::cout << "Error inputFile: Year => " << str << std::endl;
                    continue;
                }
                if (month < 1 || month > 12) {
                    std::cout << "Error inputFile: Invalid month => " << str << std::endl;
                    continue;
                }
                if (day < 1 || day > 31) {
                    std::cout << "Error inputFile: Invalid day => " << str << std::endl;
                    continue;
                }
                if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
                    std::cout << "Error inputFile: Day exceeds  => " << str << std::endl;
                    continue;
                }
                if (month == 2) {
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                        if (day > 29) {
                            std::cout << "Error inputFile: Day exceeds for February (leap year) => " << str << std::endl;
                            continue;
                        }
                    } else {
                        if (day > 28) {
                            std::cout << "Error inputFile: Day exceeds for February (non-leap year) => " << str << std::endl;
                            continue;
                        }
                    }
                }
                if (str.size() < 14) {
                    std::cout << "Error: Missing value => " << str << std::endl;
                    continue;
                }
                std::string value = str.substr(13);
                double values = atof(value.c_str());
                if (values < 0){
                    std::cout << "Error: not a positive number." << std::endl;
                    continue;
                }
                if (values > 1000){
                    std::cout << "Error: too large a number." << std::endl;
                    continue;
                }
                double result = compareFile(str);
                if (result == -1.0)
                    std::cout << "Error: No earlier date found for " << str << std::endl;
                else{
                    std::string resultDate = str.substr(0, 10);
                    std::cout << resultDate << " => " << values << " = " << result << std::endl; 
                }
            }
        }
    }  
}
