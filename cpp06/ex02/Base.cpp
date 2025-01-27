/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:20:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/22 11:31:02 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void){
    int generator = std::rand() % 3;

    switch (generator)
    {
    case 0:
        return new A;
    case 1:
        return new B;
    case 2:
        return new C;        
    default:
        return NULL;
    }
}

Base::~Base(){
}

void    Base::identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "class is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "class is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "class is C" << std::endl;
    else
        throw(errorClass());
}

const char* Base::errorClass::what() const throw(){
    return("class don't find");
}

void    Base::identify(Base& p){
    try{
        A& classA = dynamic_cast<A&>(p);
        std::cout << "Base& == A" << std::endl;
        (void)classA;
        } catch (const std::bad_cast&){
        } try{
            B& classB = dynamic_cast<B&>(p);
            std::cout << "Base& == B" << std::endl;
            (void)classB;
        } catch (const std::bad_cast&){
        } try{
            C& classC = dynamic_cast<C&>(p);
            std::cout << "Base& == C" << std::endl;
            (void)classC;
        } catch(const std::bad_cast&){
        }
}

A::A(){
}

A::~A(){
}

B::B(){
}

B::~B(){
}

C::C(){
}

C::~C(){
}