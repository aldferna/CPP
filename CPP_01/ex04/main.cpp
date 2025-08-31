/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 20:06:09 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/31 15:58:54 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

void read_and_process(std::string &s1, std::string &s2, std::string &filename)
{
    std::ifstream infile;
    std::ofstream outfile;
    std::string line;
    std::size_t found;
    
    infile.open(filename);
    if (!infile.is_open())
    {
        std::cerr << "Error opening infile" << std::endl;
        return;
    }

    outfile.open(filename + "_01");
    if (!outfile.is_open())
    {
        std::cerr << "Error opening outfile" << std::endl;
        return;
    }

    while (std::getline(infile, line)) 
    {
        found = 0;
        while((found = line.find(s1)) != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
            found += s2.length();
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }

    infile.close();
    outfile.close();
}

int main (int argv, char **argc)
{
    std::string filename;
    std::string s1;
    std::string s2;
    
    if (argv != 4)
    {
        std::cout << "[./ex04 filename s1 s2]" << std::endl;
        return (1);
    }
    filename = argc[1];
    s1 = argc[2];
    s2 = argc[3];
    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cout << "filename, s1 or s2 was empty" << std::endl;
        return (1);
    }
    if (s1 == s2)
    {
        std::cout << "s1 equal s2" << std::endl;
        return (1);
    }
    read_and_process(s1, s2, filename);
}
