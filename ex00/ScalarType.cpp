/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:49:15 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/25 15:21:47 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarType.hpp"
#include "parser.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    if (this != &other)
        *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this != &other)
        *this = other;
    return *this;
}

ScalarConverter::~ScalarConverter(){
}

void ScalarConverter::convert(std::string value)
{
    // convert char
        std::cout << "char: ";
        get_char_parsed(value);
        std::cout << "int: ";
        get_int_parsed(value);
            
}