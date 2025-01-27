/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whathever.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:35:46 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/22 12:01:46 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATHEVER_HPP
#define WHATHEVER_HPP

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
template <typename T>
T min(const T &a,const T &b){
    if (a < b)
        return a;
    else
        return b;
}
template <typename T>
T max(const T &a,const T &b){
    if (a > b)
        return a;
    else 
        return b;
}

#endif