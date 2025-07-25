/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:29:22 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/25 13:39:03 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::print_all()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "Secret: " << secret << std::endl;
}
std::string Contact::get_name() const
{
    return this->name;
}

std::string Contact::get_last_name() const
{
    return this->last_name;
}

std::string Contact::get_nickname() const
{
    return this->nickname;
}    

void Contact::set_data(std::string name, std::string last_name, 
    std::string nickname, std::string phone, std::string secret)
{
    if (name.empty() || last_name.empty() || nickname.empty() 
        || phone.empty() || secret.empty())
    {
        std::cout << "Empty field - cannot create new contact" << std::endl;
        return;
    }
    this->name = name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone = phone;
    this->secret = secret;
}
//no necesito devolver contact porque estoy configurando el propio objto, que será
// contacts[index] = contact;
