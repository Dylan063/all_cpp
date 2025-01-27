/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/25 15:41:53 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat npatron("npatron", 50);
        Bureaucrat Dylan("Dylan", 50);
        Dylan.IncrementGrade();
        Dylan.IncrementGrade();
        Dylan.IncrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        npatron.DecrementGrade();
        std::cout << Dylan.getGrade() << std::endl;
        std::cout << npatron.getGrade() << std::endl;
        Form papier("Dossier", 58, 40);
        npatron.signForm(papier);
        Dylan.signForm(papier);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
