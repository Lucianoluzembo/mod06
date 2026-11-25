/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:48:08 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/25 18:25:50 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.hpp"

void    get_char_parsed(std::string value)
{
    char *endptr;

    long v = std::strtol(value.c_str(), &endptr, 10);

    if (endptr == value && !std::isdigit(value[0]) && v == 0 && value.length() == 1)
        std::cout << static_cast<char>((unsigned char)value[0]) << std::endl;
    else if (!endptr[0] && std::isprint(v))
        std::cout << static_cast<char>((unsigned char)v) << std::endl;
    else if (value.length() > 1 && endptr[0] && endptr != value)
            std::cerr << "Imposível" << std::endl;
    else if (!std::isprint(v))
        std::cerr << "Não exibivel" << std::endl;
    return ;
}

void    get_int_parsed(std::string value)
{
    char *endptr;

    long v = std::strtol(value.c_str(), &endptr, 10);
    
    if ((endptr[0] && value.length() > 1) || v < -2147483648 || v > 2147483647)
        std::cerr << "Impossível" << std::endl;
    else if (endptr == value)
        std::cout << static_cast<int>(value[0]) << std::endl;
    else
        std::cout << v << std::endl;
    return ;
}

// void    get_float_parsed(std::string value)
// {
    
// }