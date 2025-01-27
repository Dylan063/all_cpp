/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:31:40 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/02 16:31:43 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cctype>
#include <stdexcept>
#include <ctime>
#include <climits>
#include <iomanip>
#include <set>

class PmergeMe {
private:
    std::vector<int> data;

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    void parseInput(int argc, char **av);
    void sortAndMeasure();
    template<typename Container>
    void fordJohnsonSort(Container& container) {
        if (container.size() <= 1) 
            return;
        Container sorted;
        for (size_t i = 0; i < container.size(); i += 2) {
            int a = container[i];
            int b;
            if (i + 1 < container.size()) {
                b = container[i + 1];
            } else {
                b = INT_MAX;
            }
            if (a <= b) {
                sorted.push_back(a);
                if (b != INT_MAX) {
                    sorted.push_back(b);
                }
            } else {
                sorted.push_back(b);
                sorted.push_back(a);
            }
        }
        std::sort(sorted.begin(), sorted.end());
        for (size_t i = 0; i < sorted.size(); ++i) {
            container[i] = sorted[i];
        }
    }

    template<typename Container>
    void print(const std::string& prefix, const Container& container) {
        std::cout << prefix << " ";
        for (size_t i = 0; i < container.size(); ++i) {
            std::cout << container[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif
