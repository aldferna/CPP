/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:24:37 by adrianafern       #+#    #+#             */
/*   Updated: 2025/08/17 21:49:36 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &alias = str;

    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by the pointer: " << ptr << std::endl;
    std::cout << "Memory address held by the reference: " << &alias << std::endl;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "Value pointed to by ptr " << *ptr << std::endl; //como si desreferenciaras
    std::cout << "Value pointed to by the reference: " << alias << std::endl;
}