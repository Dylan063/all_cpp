/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:55:49 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/18 09:11:12 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <cctype> 
#include <iostream>
# include <iomanip>
# include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cfloat>


class scalar{
    public :
        static void convert(const std::string& av);
        scalar();
    private : 
    static bool isNumber(const std::string& av);
    static bool isFloat(const std::string& av);
    static bool isChar(const std::string& av);
    static bool isDouble(const std::string& av);
    static bool isPseudo(const std::string& av);
    
    static void its_number(std::string av);
    static void its_Float(std::string av);
    static void its_Char(std::string av);
    static void its_double(std::string av);
    static void handlePseudoLiteral(const std::string& av);
};

#endif