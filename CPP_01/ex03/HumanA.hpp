/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:36:15 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/24 20:45:04 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon A);
        ~HumanA();
        void attack();
    private:
        Weapon A;
        std::string name;
};
