/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:21:38 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/17 19:57:30 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie() 
{
}
/* Undefined symbols for architecture x86_64:
  "Zombie::Zombie()", referenced from:
      zombieHorde(...) in zombieHorde.o */

Zombie::~Zombie ()
{
    std::cout << name << ": died!" << std::endl;
}
