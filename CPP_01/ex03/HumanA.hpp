/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:36:15 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/25 20:27:55 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &A);
        ~HumanA();
        const std::string& getName() const;
        void attack();
    private:
        Weapon &A; //ref porq el objeto ya existe (siempre)
        std::string name;
};
