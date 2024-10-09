/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:42:13 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/09 16:12:34 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"
#include <iostream>

int	main( void ) {
	{ // Int test
		std::cout << INVERT << "Int test:" << RESET << std::endl;
		int a = 48;
		int b = 35;

		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
		std::cout << "max: " << ::max<int>(a, b) << std::endl;
		std::cout << "min: " << ::min<int>(a, b) << std::endl;
		std::cout << YELLOW << "Swapping..." << RESET << std::endl;
		::swap<int>(a, b);
		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
	}
	{ // String test
		std::cout << std::endl << std::endl << INVERT << "String test:" << RESET << std::endl;
		std::string a = "string1";
		std::string b = "string2";

		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
		std::cout << "max: " << ::max<std::string>(a, b) << std::endl;
		std::cout << "min: " << ::min<std::string>(a, b) << std::endl;
		std::cout << YELLOW << "Swapping..." << RESET << std::endl;
		::swap<std::string>(a, b);
		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
	}
	{ // Char test
		std::cout << std::endl << std::endl << INVERT << "Char test:" << RESET << std::endl;
		char a = 'a';
		char b = 'b';

		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
		std::cout << "max: " << ::max<char>(a, b) << std::endl;
		std::cout << "min: " << ::min<char>(a, b) << std::endl;
		std::cout << YELLOW << "Swapping..." << RESET << std::endl;
		::swap<char>(a, b);
		std::cout << "A: " << a << std::endl << "B: " << b << std::endl;
	}
}