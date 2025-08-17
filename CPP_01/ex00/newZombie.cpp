/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:20:44 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/17 19:51:59 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* newZombie.cpp
Función externa que crea un Zombie en el heap (new). 
*/

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name); //new devuelve puntero
}

/*
El objeto está en el heap, y no en la stack local de la función. 
Si estuviera en la stack, se destruiría al salir. */