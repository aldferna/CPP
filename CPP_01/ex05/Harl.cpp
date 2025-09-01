/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:57:41 by adrianafern       #+#    #+#             */
/*   Updated: 2025/09/01 11:42:13 by adrianafern      ###   ########.fr       */
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
    std::string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (commands[i] == level)
        {
            (this->*actions[i])();
            return;
        }
    }

    std::cout << "Commands: DEBUG, INFO, WARNING, ERROR" << std::endl;
}