/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:33:25 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/10 16:37:26 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <climits>
#include <cstdlib>
#include <ctime>


class Span{
  private : 
  std::vector<int> tab;  
  unsigned int _n;
  unsigned int _index;

    
  public : 
  Span(const unsigned int N);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();
  void addNumber(unsigned int x);
  int shortestSpan();
  int longestSpan();
  int returnIndex();
  void multipleAddNumber_one(unsigned int min, unsigned int max);
  int getNumber(unsigned int i);
  class tooLong : public::std::exception{
    public :
      const char* what() const throw() {
        return "limit size tab";
      }
  };
  class notEnough : public::std::exception{
    public :
      const char* what() const throw() {
        return "not enough int";
      }
  };
    class problemAddNumber : public::std::exception{
    public :
      const char* what() const throw() {
        return "error params, max hightest than min";
      }
  };
};

#endif