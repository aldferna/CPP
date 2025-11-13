/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:21:00 by adrianafern       #+#    #+#             */
/*   Updated: 2025/11/13 19:43:23 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        Fixed(); //init fixedpoint to 0
        Fixed(const Fixed &other); //constructor copia crea un nuevo objeto identico a otro ya existente
        Fixed &operator=(const Fixed &other); //operador asignacion; ambos objetos ya existen (reemplaza)
        ~Fixed();
        int getRawBits (void) const; //return value of fixedpoint
        void setRawBits (int const raw); //sets value of fixedpoint

    private:
        int fixedpoint;
        static const int fraction = 8;
};

#endif

//fixed point number: numeros decimales usando int 
// (se reservan 8 bits para la parte fraccionaria) 1/256
//a.setRawBits(256); // Almacena 256
// valor que representa es 256 / 256 = 1.0
//a.setRawBits(128); // Almacena 128  
// valor que representa = 128 / 256 = 0.5
// aqui solo tengo el valor bruto de bits, la conversion no se hace