/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:29:50 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 13:41:55 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

// manejo array: añadir, buscar, mostrar
class PhoneBook
{
    private:
    Contact contacts[8];

    public:
    int count;
    void add_contact(Contact contact);
    void search_contact(int index); 
    void print_book(); //no hace falta pasar el array de contactos, ya esta dentro de PhoneBook
};

#endif