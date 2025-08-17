/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:03:29 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/17 19:50:02 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:
        void announce( void ) const;

        Zombie(std::string name);
        ~Zombie();
    
    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif

/* newZombie y randomChump no son métodos del objeto Zombie, 
son funciones independientes fuera de la clase.
Es decir: no necesitas un objeto Zombie para llamarlas. 

announce()	Sí porque imprime el nombre del zombi*/