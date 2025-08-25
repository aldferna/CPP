/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 21:17:35 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/25 20:54:56 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

const std::string& HumanA::getName() const
{
    return this->name; //(&) devuelve ya una ref
}

HumanA::HumanA(std::string name, Weapon &A): A(A) //atributo de HumanA(parametro q me pasan)
{
    this->name = name;
    this->A = A;   
} //inicializar la referencia porq tiene q apuntar a algo en el momento de crear el objeto

HumanA::~HumanA()
{
    std::cout << getName() << ": Human A destroyed" << std::endl; 
}

void HumanA::attack()
{
    std::cout << getName() << " attacks with " << A.getType() << std::endl;
}
