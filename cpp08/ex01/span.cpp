/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:50:21 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/10 16:38:13 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include "iostream"

Span::Span(const unsigned int N) : tab(), _n(N), _index(0){
}

Span::~Span(){
}

Span::Span(const Span &other) : tab(other.tab), _n(other._n), _index(other._index){
}

Span &Span::operator=(const Span &other){
    if (this != &other){
        _n = other._n;
        tab = other.tab;
        _index = other._index;
    }
    return *this;
}

void Span::addNumber(unsigned int x){
    if (this->_index >= this->_n)
        throw(tooLong());
    else{
        tab.push_back(x);
        this->_index++;
    }
}

void Span::multipleAddNumber_one(unsigned int min, unsigned int max){
    if (min > max){
        throw(problemAddNumber());
    }
    if (this->_n <= this->_index +(max - min))
        throw(tooLong());
    else{
        for (unsigned int i = 0; i < (max - min); ++i) {
            if (_index >= _n)
                throw tooLong();
            int randomNumber = min + std::rand() % (max - min + 1);
            tab.push_back(randomNumber);
            ++_index;
        }
    }
}

int Span::longestSpan(){
    unsigned int i = 0;   
    int longest = tab[0];
    int smallest = tab[0];
    while (i < this->_index){
        if (smallest > tab[i])
            smallest = tab[i];
        else if (longest < tab[i])
            longest = tab[i];
        i++;
    }
    return (longest - smallest);
}

int Span::shortestSpan(){
    if (this->_index < 2)
        throw(notEnough());
    int k = INT_MAX;
    for (unsigned int i = 0; i < this->_index; i++){
        for(unsigned int j = 0; j < this->_index; j++){
            if (tab[i] != tab[j]){
                int diff = tab[i] - tab[j];
                if (diff < 0)
                    diff = -diff;
                if (diff < k)
                    k = diff;
            }
        }
    }
    return k;
}

int Span::getNumber(unsigned int i){
    return tab[i];
}

int Span::returnIndex(){
    return this->_index;
}