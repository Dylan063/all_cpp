/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:29:57 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/20 15:53:30 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

class Base
{
public:
    virtual ~Base();
    void identify(Base *p);
    void identify(Base &p);
    class errorClass : public std::exception
    {
        const char *what() const throw();
    };
};
Base *generate(void);

class A : public Base
{
    public :
    A();
    ~A();
};

class B : public Base
{
    public :
    B();
    ~B();
};

class C : public Base
{
    public :
    C();
    ~C();
};

#endif