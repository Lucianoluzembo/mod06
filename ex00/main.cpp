/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:51:20 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/27 07:27:38 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarType.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error\nUse:" << av[0] << " value" << std::endl;
        return (1);
    }
    std::cout << " chegou " << std::endl;
    ScalarConverter::convert(av[1]);
    ScalarConverter obj;
    obj.convert(av[1]);
    return (0);
}