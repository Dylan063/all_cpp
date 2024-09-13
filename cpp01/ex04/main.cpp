/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:05:10 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/12 19:12:58 by dravaono         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

std::string file_to_str(const std::string av)
{
    std::ifstream file(av.c_str());
    std::string str;
    std::string reel_str;
    if (file.is_open())
    {
        while (std::getline(file, str))
            reel_str += str + "\n";
        file.close();
        if (!reel_str.empty() && reel_str[reel_str.size() - 1] == '\n')
            reel_str.erase(reel_str.size() - 1);
    }
    else
    {
        std::cout << "error file" << std::endl;
        exit(1);
    }
    return reel_str;
}

std::string reel_str(const std::string &s1, const std::string &s2, const std::string av)
{
    std::string file = file_to_str(av);
    std::string last;
    size_t pos = 0;
    size_t found;

    while ((found = file.find(s1, pos)) != std::string::npos)
    {
        last.append(file, pos, found - pos);
        last += s2;
        pos = found + s1.length();
    }
    last.append(file, pos, std::string::npos);
    return last;
}

void last_file(const std::string &file, const std::string &reel_str)
{
    std::ofstream outfile(file.c_str());
    if (outfile.is_open())
    {
        outfile << reel_str;
        outfile.close();
    }
    else
    {
        std::cout << "Error outfile" << std::endl;
        exit(1);
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "Error args" << std::endl;
    else
    {
        std::string file = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string str = reel_str(s1, s2, av[1]);
        last_file(file + ".replace", str);
    }
    return 0;
}