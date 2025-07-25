/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:20:44 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 15:09:54 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* newZombie.cpp
Una función externa que crea un Zombie en el heap (new). 

This function creates a zombie, names it, and returns it so you can use it outside
of the function scope.*/

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name); //new devuelve puntero
}

/* ¿Por qué "para usarlo fuera del scope"?
Porque el objeto está en el heap, y no en la stack local de la función. 
Si estuviera en la stack, se destruiría al salir de la función. */