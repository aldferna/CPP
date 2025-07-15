/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianafernandez <adrianafernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 21:53:56 by adrianafern       #+#    #+#             */
/*   Updated: 2025/07/14 12:20:18 by adrianafern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //std::cout (prints) std::endl (\n)
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; //<< insertion
        return (0);
    }   
    for (int i = 1; i < argc; i++)
    {
        std::string str = argv[i]; //from C style array (argv[i] - char*) to C++ string (std::string)
        for (size_t j = 0; j < str.length(); j++)
            str[j] = toupper(str[j]);
        std::cout << str;
    }
    std::cout << std::endl;
    return (0);
}
