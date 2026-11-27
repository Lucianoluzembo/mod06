/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:48:08 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/27 08:59:20 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.hpp"
#include <climits>
#include <cerrno>

void    get_char_parsed(std::string value)
{
    char *endptr = NULL;

    long v = std::strtol(value.c_str(), &endptr, 10);

    if (value.empty())
        std::cerr << "Imposível" << std::endl;
    else if (endptr == value.c_str())
    {
        if (value.length() == 1 && !std::isdigit(value[0]))
            std::cout << static_cast<char>((unsigned char)value[0]) << std::endl;
        else
            std::cerr << "Imposível" << std::endl;
    }
    else
    {
        if (endptr && !std::isdigit(*endptr) && *endptr != '\0')
            std::cout << "Impossivel" << std::endl;
        else if (!std::isprint(v))
            std::cerr << "Não exibivel" << std::endl;
        else
            std::cout << static_cast<char>((unsigned char)v) << std::endl;
    }
    return ;
}

void    get_int_parsed(std::string value)
{
    if (value.empty())
    {
        std::cerr << "Impossível" << std::endl;
        return ;
    }

    char    *endptr;
    long v = std::strtol(value.c_str(), &endptr, 10);

    if (endptr == value.c_str())
    {
        if (value.length() == 1)
            std::cout << static_cast<int>(value[0]) << std::endl;
        else
            std::cerr << "Impossível" << std::endl;
        return ;
    }

    if (*endptr != '\0'|| v < INT_MIN || v > INT_MAX)
    {
        std::cerr << "Impossível" << std::endl;
        return ;
    }

    std::cout << static_cast<int>(v) << std::endl;
}
