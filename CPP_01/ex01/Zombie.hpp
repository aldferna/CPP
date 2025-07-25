/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:20:26 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 15:58:28 by adrianafern      ###   ########.fr       */
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
        void set_name(std::string name); //cd usas el constructor por defecto

        Zombie(std::string name);
        Zombie(); //constructor por defecto → para crear arrays de objetos en el heap (new Zombie[N])
        ~Zombie();
    
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif