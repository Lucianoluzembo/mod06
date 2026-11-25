/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:48:08 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/25 14:46:09 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.hpp"

void    get_char_parsed(std::string value)
{
    char *endptr;

    long v = std::strtol(value.c_str(), &endptr, 10);

    if (endptr == value && !std::isdigit(value[0]) && v == 0 && value.length() == 1)
        std::cout << "possível literal" << std::endl;
    if (endptr != value && (v >= 32 && v <= 126))
        std::cout << "possivel caracter exibivel" << std::endl;
    if (!(v >= 32 && v <= 126) && value.length() == 1)
        std::cout << "possível nao exibivel char" << std::endl;
    else if (value.length() > 1)
        std::cout << "Possível Imposível" << std::endl;
    return ;
}