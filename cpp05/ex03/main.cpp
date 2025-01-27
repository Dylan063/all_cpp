/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/11/22 16:19:09 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat manager("Alice", 1);
        Bureaucrat assistant("Bob", 50);
        Intern intern;
        AForm* form1 = intern.makeForm("presidentialPardonForm", "Arthur Dent");
        AForm* form2 = intern.makeForm("robotomyRequestForm", "Marvin");
        AForm* form3 = intern.makeForm("shrubberyCreationForm", "Garden");
        if (form1) {
            std::cout << "\nFormulaire 1 : " << *form1 << std::endl;
            manager.signForm(*form1);
            manager.executeForm(*form1);
        }
        if (form2) {
            std::cout << "\nFormulaire 2 : " << *form2 << std::endl;
            assistant.signForm(*form2);
            manager.signForm(*form2);
            manager.executeForm(*form2);
        }
        if (form3) {
            std::cout << "\nFormulaire 3 : " << *form3 << std::endl;
            assistant.signForm(*form3);
            assistant.executeForm(*form3);
            manager.signForm(*form3);
            manager.executeForm(*form3);
        }
        AForm* invalidForm = intern.makeForm("unknown form", "Unknown Target");
        if (!invalidForm) {
            std::cout << "\nLe formulaire demandé n'existe pas.\n" << std::endl;
        }
        delete form1;
        delete form2;
        delete form3;
    } catch (const std::exception &e) {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }
    return 0;
}