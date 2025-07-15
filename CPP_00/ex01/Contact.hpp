/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:29:47 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/15 13:46:10 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

//guardar info * print info
class Contact
{
    private:
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;

    public:
    void set_data(std::string name, std::string last_name, std::string nickname, 
        std::string phone, std::string secret);
    void print_all();
    std::string get_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
};

#endif

/* Cuando dos archivos de cabecera (.hpp) se incluyen mutuamente, el compilador se bloquea porque:
Cuando procesa PhoneBook.hpp y llega a #include "Contact.hpp", intenta leer Contact.hpp.
Si dentro de Contact.hpp hay un #include "PhoneBook.hpp", vuelve a leer PhoneBook.hpp, 
pero aún no ha terminado de procesar la definición de Contact, 
por lo que Contact aún no está "visible" y el compilador no sabe qué es.
 */