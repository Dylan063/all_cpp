/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:13:21 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/02 14:03:24 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    try {
        if (argc < 2) {
            std::cerr << "Error: No input provided." << std::endl;
            return 1;
        }
        PmergeMe pmerge;
        pmerge.parseInput(argc, argv);
        pmerge.sortAndMeasure();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
