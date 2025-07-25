/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:21:04 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 14:51:17 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
randomChump.cpp
Otra función externa que crea un Zombie en la stack

This function creates a zombie, names it, and makes it announce itself.
*/

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie z(name);
    z.announce();
}