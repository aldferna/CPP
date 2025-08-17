/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:21:04 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/17 19:46:08 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
randomChump.cpp
Función externa que crea un Zombie en la stack
*/

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie z(name);
    z.announce();
}