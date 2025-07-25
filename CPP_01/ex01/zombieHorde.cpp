/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:22:11 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 15:51:17 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N]; //new Tipo[tamaño];

    for (int i = 0; i < N; i++)
        horde[i].set_name(name + std::to_string(i)); 
    return horde;
}

/* Zombie horde[N];
Arrays con tamaño dinámico (N) en el stack no son válidos en C++ estándar
dice que tengo que usar delete, con lo cual es heap.
Ademas: el constructor tiene q recibir string name */

/* 1.
Zombie horde[N]; //crea en el stack 
for (int i = 0; i < N; i++)
    horde[i] = new Zombie(name); //horde[i] es un objeto y new devuelve un puntero
    //Estás intentando asignar un puntero a un objeto directamente, lo cual no tiene sentido */
