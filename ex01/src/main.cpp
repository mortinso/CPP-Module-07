/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:18:30 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/23 17:49:39 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/test_functions.hpp"
#include "../inc/iter.hpp"
#include <iostream>

void	upper( std::string text ) {
	for (unsigned int i = 0; i < text.length(); i++)
		text[i] = toupper(text[i]);
	::ft_cout(text);
}

int	main( void ) {
	{ // Int test
		std::cout << INVERT << "Int test:" << RESET << std::endl;
		int	n[5] = { 0, 2, 4, 6, 8 };

		std::cout << GREEN << "Members:" << RESET << std::endl;
		::iter(n, 5, ft_cout<int>);

		std::cout << std::endl << GREEN << "Members + 1:" << RESET << std::endl;
		::iter(n, 5, add_one<int>);
	}
	{ // String test
		std::cout << std::endl << std::endl << INVERT << "String test:" << RESET << std::endl;
		std::string names[3] = { "Lando", "Nolan", "Earl" };

		std::cout << GREEN << "Members:" << RESET << std::endl;
		::iter(names, 3, ft_cout<std::string>);

		std::cout << std::endl << GREEN << "Upercase:" << RESET << std::endl;
		::iter(names, 3, upper);
	}
	{ // Char test
		std::cout << std::endl << std::endl << INVERT << "Char test:" << RESET << std::endl;
		char c[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };

		std::cout << GREEN << "Members:" << RESET << std::endl;
		::iter(c, 6, ft_cout<char>);

		std::cout << std::endl << GREEN << "Members + 1:" << RESET << std::endl;
		::iter(c, 6, add_one<char>);
		std::cout << std::endl;
	}
}