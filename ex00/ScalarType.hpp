/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:43:09 by lluzembo          #+#    #+#             */
/*   Updated: 2026/11/23 14:27:35 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARTYPE_HPP
# define SCALARTYPE_HPP
# include <iostream>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
        static void convert(std::string value);
};

#endif