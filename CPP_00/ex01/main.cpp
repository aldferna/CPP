/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:47:02 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 13:52:02 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static int is_a_number(std::string command)
{
    int i;

    i = 0;
    while (command[i])
    {
        if (!isdigit(command[i]))
            return 0;
        i++;
    }
    return 1;
}

static void get_input(std::string (&data)[5])
{
    std::cout << "Name: " << std::endl;
    std::getline(std::cin, data[0]);
    std::cout << "Second Name: " << std::endl;
    std::getline(std::cin, data[1]);
    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, data[2]);
    std::cout << "Phone: " << std::endl;
    std::getline(std::cin, data[3]);
    std::cout << "Darkest secret: " << std::endl;
    std::getline(std::cin, data[4]);
}

int main ()
{
    PhoneBook phonebook;
    Contact c;
    std::string command;
    std::string data[5];
    int index;

    std::cout << "Possible commands: ADD, SEARCH or EXIT" << std::endl;
    std::cin >> command; //cin deja el salto de línea (\n) en el buffer.
    std::cin.ignore();
    
    phonebook.count = 0;
    
    while (command != "EXIT")
    {
        if (command == "ADD")
        {
            get_input(data); //a continuacion: llamar a metodo sobre objeto
            c.set_data(data[0], data[1], data[2], data[3], data[4]); //c = set_data; como que 'devulve' contact
            phonebook.add_contact(c); //son funciones del objeto (metodos) no llamads a traves del .h
            std::cout << "Your contact was added!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            phonebook.print_book();
            std::cout << "Select index: " << std::endl;
            std::cin >> command;
            if (!command.empty() && is_a_number(command))
            {
                index = stoi(command); //stod es para float
                phonebook.search_contact(index);
            }
            else
                std::cout << "Invalid index: number 0 to 7" << std::endl;
        }
        std::cout << "Possible commands: ADD, SEARCH or EXIT" << std::endl;
        std::cin >> command;
        std::cin.ignore();
    }
    return 0;
}
