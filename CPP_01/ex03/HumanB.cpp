/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:46:06 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/25 21:40:16 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &B)
{
    this->B = &B;
}

const std::string& HumanB::getWeapon() const
{
    if (this->B == nullptr)
    {
        static std::string noWeapon = "no weapon"; //static para poder devolver una ref (si no se destruye la variable)
        return noWeapon;
    }
    return B->getType();
}

void HumanB::attack()
{
    if (this->B == nullptr)
        std::cout << getName() << " attacks without weapon" << std::endl;
    else
        std::cout << getName() << " attacks with " << B->getType() << std::endl;
}

const std::string& HumanB::getName() const
{
    return this->name;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->B = nullptr;
}

HumanB::~HumanB()
{
    std::cout << getName() << ": Human B destroyed" << std::endl; 
}
