/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:48:29 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 16:12:25 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void scalar::convert(const std::string &av)
{
    if (isDouble(av))
        its_double(av);
    else if (isFloat(av))
        its_Float(av);
    else if (isNumber(av))
        its_number(av);
    else if (isChar(av))
        its_Char(av);
    else if (isPseudo(av))
        handlePseudoLiteral(av);
    else
        std::cout << "wrong argument" << std::endl;
}

bool scalar::isNumber(const std::string &av)
{
    for (size_t i = 0; i < av.size(); i++)
        if (!std::isdigit(av[i]) && av[i] != '-' && av[i] != '+')
            return false;
    return true;
}

bool scalar::isFloat(const std::string &av)
{
    int k = 0;
    for (size_t i = 0; i < av.size(); i++)
    {
        if (av[i] == '.')
            k++;
        else if (!std::isdigit(av[i]) && av[i] != '-' && av[i] != '+' && (av[i] != 'f' || i != av.size() - 1))
            return false;
    }
    if (k == 1 && av[av.size() - 1] == 'f')
        return true;
    return false;
}

bool scalar::isChar(const std::string &av)
{
    if (av.size() == 1 && ((av[0] >= 32 && av[0] < 48) || (av[0] > 57 && av[0] <= 126)))
        return true;
    return false;
}

bool scalar::isDouble(const std::string &av)
{
    int points = 0;
    for (size_t i = 0; i < av.size(); i++)
    {
        if (av[i] == '.')
            points++;
        else if (!std::isdigit(av[i]))
            return false;
    }
    if (points == 1)
        return true;
    return false;
}

void scalar::its_number(std::string av)
{
    const char *str = av.c_str();
    double value = strtod(str, NULL);
    int i = static_cast<int>(value);
    float f = static_cast<float>(value);
    char c = static_cast<char>(value);

    if (i >= 32 && i <= 126)
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: IMPOSSIBLE" << std::endl;
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (value > FLT_MAX || value < -FLT_MAX)
        std::cout << "float: impossible (overflow)" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
    if (value > DBL_MAX || value < -DBL_MAX)
         std::cout << "double: impossible (overflow)" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
}

void scalar::its_Float(std::string av)
{
    const char *str = av.c_str();
    double value = strtod(str, NULL);

    int i = static_cast<int>(value);
    float f = static_cast<float>(value);
    char c = static_cast<char>(value);
    if (i > 0 && i < 127)
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char : IMPOSSIBLE" << std::endl;
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "int: INT_MAX OR INT_MAX" << i << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (value > FLT_MAX || value < -FLT_MAX)
        std::cout << "float : FLOAT_MAX OR FLOAT_MIN" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
    if (value < DBL_MAX || value > -DBL_MAX)
        std::cout << "double: " << value << std::endl;
    else
        std::cout << "double : DOUBLE_MAX OR DOUBLE_MAX" << std::endl;
}

void scalar::its_Char(std::string av)
{
    int i = static_cast<int>(av[0]);
    float f = static_cast<float>(av[0]);
    double g = static_cast<double>(av[0]);

    std::cout << "char: " << av << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << f << 'f' << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << g << std::endl;
}

void scalar::its_double(std::string av)
{
    const char *str = av.c_str();
    double value = strtod(str, NULL);

    int i = static_cast<int>(value);
    float f = static_cast<float>(value);
    char c = static_cast<char>(value);
    if ((i >= 32 && i < 48) || (i > 57 && i <= 126))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char : IMPOSSIBLE" << std::endl;
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "int: INT_MAX OR INT_MAX" << i << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    if (value > FLT_MAX || value < FLT_MIN)
        std::cout << "float : FLOAT_MAX OR FLOAT_MIN" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
    if (value < DBL_MAX || value > DBL_MIN)
        std::cout << "double: " << value << std::endl;
    else
        std::cout << "double : DOUBLE_MIN OR DOUBLE_MAX" << std::endl;
}

void scalar::handlePseudoLiteral(const std::string &av)
{
    std::string char_output = "Impossible";
    std::string int_output = "Impossible";

    std::string float_output;
    std::string double_output;

    if (av[av.size() - 1] == 'f')
    {
        float_output = av;
        double_output = av.substr(0, av.size() - 1);
    }
    else
    {
        float_output = av + "f";
        double_output = av;
    }
    std::cout << "char: " << char_output << std::endl;
    std::cout << "int: " << int_output << std::endl;
    std::cout << "float: " << float_output << std::endl;
    std::cout << "double: " << double_output << std::endl;
}

bool scalar::isPseudo(const std::string &av)
{
    if (av == "+anf" || av == "-inf" || av == "nan" || av == "-inff" || av == "+anff")
        return true;
    return false;
}