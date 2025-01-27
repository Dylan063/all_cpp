/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates_three.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:09:08 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 14:00:02 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_THREE_HPP
#define TEMPLATES_THREE_HPP

#include <exception>

template <class T>
class Array
{
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);
    unsigned int size() const;
    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    class except : public std::exception
    {
        const char *what() const throw();
    };

private:
    unsigned int _n;
    T *tab;
};

template<class T>
Array<T>::Array() : _n(0), tab(NULL){
}

template<class T>
Array<T>::~Array(){
    delete[] tab;
}

template<class T>
Array<T>::Array(unsigned int n) : _n(n), tab(new T[n]){
}

template<class T>
Array<T>::Array(const Array &other) : _n(other._n), tab(new T[other._n]){
    for (unsigned int i = 0; i < _n; i++){
        tab[i] = other.tab[i];
    }
}

template<class T>
const char* Array<T>::except::what() const throw() {
    return "Index out of range!";
}

template<class T>
Array<T> &Array<T>::operator=(const Array &other) {
    if (this != &other) {
        delete[] tab;
        _n = other._n;
        tab = new T[_n];
        for (unsigned int i = 0; i < _n; i++) {
            tab[i] = other.tab[i];
        }
    }
    return *this;
}

template<class T>
unsigned int Array<T>::size() const{
    return _n;
}

template<class T>
T &Array<T>::operator[](unsigned int index){
    if (index >= _n)
        throw(except());
    return tab[index];
}

template<class T>
const T &Array<T>::operator[](unsigned int index) const{
    if (index >= _n)
        throw(except());
    return tab[index];
}

#endif