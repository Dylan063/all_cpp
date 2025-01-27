/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:35:54 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/02 16:39:16 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &other)
{
    this->tab = other.tab;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        this->tab = other.tab;
    }
    return *this;
}

int RPN::functionRPN(const std::string &av)
{
    for (int i = 0; av[i]; i++)
    {
        if ((!isalnum(av[i])) && (av[i] != '-' && av[i] != ' ' && av[i] != '+' && av[i] != '*' && av[i] != '/'))
            throw std::runtime_error("Error");
    }
    for (int i = 0; av[i]; i++)
    {
        if (av[i] == ' ')
            continue;
        if (isdigit(av[i]))
        {
            tab.push(av[i] - '0');
        }
        else if (av[i] == '-' || av[i] == '+' || av[i] == '*' || av[i] == '/')
        {
            if (tab.size() < 2)
                throw std::runtime_error("Error");
            int first = tab.top();
            tab.pop();
            int second = tab.top();
            tab.pop();
            int result = 0;
            if (av[i] == '-')
            {
                result = second - first;
            }
            else if (av[i] == '+')
            {
                result = second + first;
            }
            else if (av[i] == '*')
            {
                result = second * first;
            }
            else if (av[i] == '/')
            {
                if (first == 0)
                    throw std::runtime_error("Error");
                result = second / first;
            }
            tab.push(result);
        }
    }
    if (tab.size() != 1)
        throw std::runtime_error("Error");
    return (tab.top());
}
