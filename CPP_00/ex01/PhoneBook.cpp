/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:29:26 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 13:48:28 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::search_contact(int index)
{
    if (index < 0 || index >= this->count)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    contacts[index].print_all();
}

void PhoneBook::add_contact(Contact contact)
{
    int index = this->count % 8;
    this->contacts[index] = contact;
    this->count++;
}

std::string truncate(const std::string str)
{
    std::string news;

    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

void PhoneBook::print_book()
{
    int i;

    i = 0;
    std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
          << std::setw(10) << std::right << "FirstName" << "|"
          << std::setw(10) << std::right << "LastName" << "|"
          << std::setw(10) << std::right << "Nickname" << "|"
          << std::endl;
    while (i < this->count && i < 8)
    {
        std::cout << "|" << std::setw(10) << std::right << i << "|" 
            << std::setw(10) << std::right << truncate(this->contacts[i].get_name()) << "|"
            << std::setw(10) << std::right << truncate(this->contacts[i].get_last_name()) << "|"
            << std::setw(10) << std::right << truncate(this->contacts[i].get_nickname()) << "|"
            << std::endl;
        //truncate(PhoneBook[i].get_last_name()) -> no puedo hacere sto porque PhoneBook es un objeto,
        //tengo que acceder al array que tiene ese objeto asi: this->contacts (el array del objeto)
        //en realidad este this-> se usa solo si hay ambiguedad, como en el metodo "add contact"
        i++;
    }
}
