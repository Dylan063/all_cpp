/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmergeme.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:26:10 by dravaono          #+#    #+#             */
/*   Updated: 2025/01/02 16:33:27 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other){
    this->data = other.data;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
    if (this != &other)
    {
        this->data = other.data;
    }
    return *this;
}

void PmergeMe::parseInput(int argc, char **av)
{
    std::set<int> seen;
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = av[i];
        for (size_t j = 0; j < arg.size(); ++j)
        {
            if (!std::isdigit(arg[j]))
            {
                throw std::runtime_error("Error");
            }
        }
        int value = std::atoi(arg.c_str());
        std::pair<std::set<int>::iterator, bool> result = seen.insert(value);
        if (!result.second)
        {
            throw std::runtime_error("Error");
        }
        data.push_back(value);
    }
}

void PmergeMe::sortAndMeasure()
{
    std::vector<int> vec(data);
    std::deque<int> deq(data.begin(), data.end());
    const int iterations = 100;
    clock_t start = clock();
    for (int i = 0; i < iterations; ++i)
    {
        fordJohnsonSort(vec);
    }
    clock_t end = clock();
    double timeVec = static_cast<double>(end - start) / CLOCKS_PER_SEC / iterations * 1e6;
    start = clock();
    for (int i = 0; i < iterations; ++i)
    {
        fordJohnsonSort(deq);
    }
    end = clock();
    double timeDeq = static_cast<double>(end - start) / CLOCKS_PER_SEC / iterations * 1e6;
    print("Before:", data);
    print("After (vector):", vec);
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Time to process a range of " << data.size() << " elements with std::vector: " << timeVec << " us" << std::endl;

    print("After (deque):", deq);
    std::cout << "Time to process a range of " << data.size() << " elements with std::deque: " << timeDeq << " us" << std::endl;
}
