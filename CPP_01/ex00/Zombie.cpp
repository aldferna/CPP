/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:10:42 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 15:11:14 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//"This function (newZombie) creates a zombie" -> entonces: hay que hacer un constructor

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie ()
{
    std::cout << name << ": died!" << std::endl;
}