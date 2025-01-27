/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:14:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/10/22 15:22:36 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat1("Alice", 5);
        Bureaucrat bureaucrat2("Bob", 50);
        presidentialPardonForm pardonForm;
        shrubbery shrub;
        robot robo;
        std::cout << pardonForm << std::endl;
        bureaucrat2.signForm(pardonForm);
        bureaucrat2.signForm(robo);
        bureaucrat2.signForm(shrub);
        bureaucrat1.signForm(pardonForm);
        bureaucrat1.signForm(shrub);
        bureaucrat1.signForm(robo);
        bureaucrat2.executeForm(pardonForm);
        bureaucrat2.executeForm(shrub);
        bureaucrat2.executeForm(robo);
        bureaucrat1.executeForm(pardonForm);
        bureaucrat1.executeForm(shrub);
        bureaucrat1.executeForm(robo);
    }
    catch (const std::exception &e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
    
    return 0;
}
