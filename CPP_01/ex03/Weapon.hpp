/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:15:44 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/24 20:44:11 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType(void) const; //"returns a constant reference to type"
        void setType(std::string new_type);
    private:
        std::string type;
};

#endif