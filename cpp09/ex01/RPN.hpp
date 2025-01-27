/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:58:55 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/02 16:38:42 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <exception>

class RPN{
  private : 
  std::stack<int> tab;

  public : 
  RPN();
  ~RPN();
  RPN(const RPN &other);
  RPN &operator=(const RPN &other);
  int functionRPN(const std::string &av);
};

#endif