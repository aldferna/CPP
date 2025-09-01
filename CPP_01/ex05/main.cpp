/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:34:11 by adrianafern       #+#    #+#             */
/*   Updated: 2025/09/01 11:42:43 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argv, char **argc)
{
    Harl Harl;

    if (argv != 2)
    {
        std::cout << "Commands: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (1);
    }
    Harl.complain(argc[1]);
}