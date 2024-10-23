/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:42:13 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/23 17:41:05 by mortins-         ###   ########.fr       */
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
	{ // Subject test
		std::cout << std::endl << std::endl << INVERT << "Subject test:" << RESET << std::endl;
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}
}