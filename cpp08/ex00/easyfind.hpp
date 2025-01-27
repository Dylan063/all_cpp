/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:53:25 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/10 16:43:11 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <exception>

class notFind : public::std::exception{
    public :
    const char* what() const throw() {
        return "Element not found!";
    }
};

template<typename T>
int easyfind(T &a, const int b){
    typename T::iterator it = std::find(a.begin(), a.end(), b);
    if (it != a.end())
        return *it;
    else
        throw(notFind());
}



#endif