/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:57:41 by adrianafern       #+#    #+#             */
/*   Updated: 2025/09/01 12:06:14 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG:" << std::endl << "Where is my phone?! Cannot find it!" << std::endl;
}   

void Harl::info()
{
    std::cout << "INFO:" << std::endl << "This phone's screen breaks easily." << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING:" << std::endl << "Too many pics and videos! You'll have to delete half of them." << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR:" << std::endl << "Dead batery!" << std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    std::string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (i = 0; i < 4; i++)
    {
        if (commands[i] == level)
            break;
    }

    switch (i)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3: 
            error();
            break;
        default:
            std::cout << "Commands: DEBUG, INFO, WARNING, ERROR" << std::endl;   
    }
}
