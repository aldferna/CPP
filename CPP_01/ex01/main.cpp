/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:52:15 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/31 15:51:57 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int argv, char **argc)
{
    int index;
    std::string input;
    std::string name;
    Zombie *horde;

    if (argv != 2)
    {
        std::cout << "[./ex01 name]" << std::endl;
        return (1);
    }
    name = argc[1];
    std::cout << "Set number of zombies:" << std::endl;
    std::getline(std::cin, input);
    index = std::stoi(input);
    if (name.empty() || input.empty() || index <= 0 || index > 10000) 
    {
        std::cout << "Empty name or invalid number of zombies (1 to 10.000)" << std::endl;
        return (1);
    }
    horde = zombieHorde(index, name);
    for (int i = 0; i < index; i++)
        horde[i].announce();
    delete[] horde;
}

//horde[i] no es un puntero. Es un objeto, no hice new para cada zombi individual.