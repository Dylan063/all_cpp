/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:25:28 by dravaono          #+#    #+#             */
/*   Updated: 2024/12/11 14:00:30 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack &operator=(const MutantStack<T> &other){
        if (this != &other){
            std::stack<T>::operator=(other);
        }   
    }
    ~MutantStack() {}
    
    iterator begin(){ 
        return std::stack<T>::c.begin();
    }
    iterator end() {
        return std::stack<T>::c.end();
    }
    const_iterator begin() const {
        return this->c.begin();
    }
    const_iterator end() const {
        return this->c.end();
    }
    reverse_iterator rbegin() {
        return this->c.rbegin();
    }
    reverse_iterator rend() {
        return this->c.rend();
    }
    const_reverse_iterator rbegin() const {
        return this->c.rbegin();
    }
    const_reverse_iterator rend() const {
        return this->c.rend();
    }
};

#endif
