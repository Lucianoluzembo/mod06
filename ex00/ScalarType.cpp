/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:49:15 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/23 14:27:46 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarType.hpp"

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
    
}