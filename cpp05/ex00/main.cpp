/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:04:43 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/22 16:03:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
    try {
        Bureaucrat Dylan("Dylan", 147);
        Bureaucrat npatron("npatron", 2);
        Dylan.DecrementGrade();
        std::cout << Dylan.getGrade() << std::endl;
        Dylan.DecrementGrade();
        std::cout << Dylan.getGrade() << std::endl;
        std::cout << npatron.getGrade() << std::endl;
        npatron.IncrementGrade();
        std::cout << npatron.getGrade() << std::endl;
        Dylan.DecrementGrade();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
