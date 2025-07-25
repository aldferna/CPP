/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:52:15 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 16:57:25 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int index;
    std::string input;
    Zombie *horde;

    std::cout << "Set number of zombies" << std::endl;
    std::getline(std::cin, input);
    index = std::stoi(input);
    if (index <= 0 || index > 10000) 
    {
        std::cout << "Invalid number of zombies (1 to 10.000)" << std::endl;
        return (1);
    }
    horde = zombieHorde(index, "zombi");
    for (int i = 0; i < index; i++)
        horde[i].announce();
    //for (int i = 0; i< index; i++)
    delete[] horde;
}

//Esto es un error porque horde[i] no es un puntero. Es un objeto, 
//y tú no hiciste new para cada zombi individual.