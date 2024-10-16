/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:27:45 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/16 15:28:15 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Array.hpp"
#include <cmath>

struct Data {
	std::string		user_name;
	unsigned int	user_id;
};

int	main( void ) {
	{ // Empty array test
		std::cout << INVERT << "Empty array test" << RESET << std::endl;

		try {
			Array<int>	empty_arr;

			std::cout << "Empty.size() = " << empty_arr.size() << std::endl;
			std::cout << "Empty[0] = " << empty_arr[0] << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Int array test
		std::cout << std::endl << std::endl << INVERT << "Int array test" << RESET << std::endl;

		try {
			Array<int>	ints(8);

			for (unsigned int i = 0; i < ints.size(); i++)
				ints[i] = i;

			for (unsigned int i = 0; i < ints.size(); i++)
				std::cout << "Int[" << i << "] = " << ints[i] << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Float array test
		std::cout << std::endl << std::endl << INVERT << "Float array test" << RESET << std::endl;

		try {
			Array<float>	floats(8);

			for (unsigned int i = 0; i < floats.size(); i++)
				floats[i] = i + 0.5f;

			for (unsigned int i = 0; i < floats.size(); i++)
				std::cout << "Float[" << i << "] = " << floats[i] << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Char array test
		std::cout << std::endl << std::endl << INVERT << "Char array test" << RESET << std::endl;

		try {
			Array<char> chars(5);

			for (unsigned int i = 0; i < chars.size(); i++)
				chars[i] = 'a' + i;

			for (unsigned int i = 0; i < chars.size(); i++)
				std::cout << "Char[" << i << "] = " << chars[i] << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // String array test
		std::cout << std::endl << std::endl << INVERT << "String array test" << RESET << std::endl;

		try {
			Array<std::string>	strings(5);
			std::string			set[5] = { "one", "two", "three", "four", "five" };

			for (unsigned int i = 0; i < strings.size(); i++)
				strings[i] = "String " + set[i];

			for (unsigned int i = 0; i < strings.size(); i++)
				std::cout << "String[" << i << "] = " << strings[i] << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Data struct array type
		std::cout << std::endl << std::endl << INVERT << "Data struct array test" << RESET << std::endl;

		try {
			Array<Data>	data(3);
			std::string	set[3] = { "one", "two", "three" };

			for (unsigned int i = 0; i < data.size(); i++) {
				data[i].user_name = "User " + set[i];
				data[i].user_id = 1000 + i;
			}

			for (unsigned int i = 0; i < data.size(); i++) {
				std::cout << "Data[" << i << "].user_name = " << data[i].user_name << std::endl;
				std::cout << "Data[" << i << "].user_id = " << data[i].user_id << std::endl;
			}
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{ // Deep copy test
		std::cout << std::endl << std::endl << INVERT << "Deep copy test" << RESET << std::endl;

		try {
			Array<int>	original(5);
			Array<int>	copy;
			for (unsigned int i = 0; i < original.size(); i++)
				original[i] = i;

			std::cout << GREEN << "Original = { ";
			for (unsigned int i = 0; i < original.size(); i++)
				std::cout << original[i] << " ";
			std::cout << "}" << RESET << std::endl;

			std::cout << YELLOW << "Copying..." << std::endl;
			copy = original;

			std::cout << GREEN << "Copy = { ";
			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << "}" << RESET << std::endl;

			std::cout << YELLOW << "Modifying copy array..." << std::endl;
			for (unsigned int i = 0; i < copy.size(); i++)
				copy[i] = (i + 1) * 2;
			
			std::cout << GREEN << "Original = { ";
			for (unsigned int i = 0; i < original.size(); i++)
				std::cout << original[i] << " ";
			std::cout << "}" << RESET << std::endl;
			
			std::cout << GREEN << "Copy = { ";
			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << "}" << RESET << std::endl;
		}
		catch (std::exception &e) { std::cout << e.what() << std::endl; }
	}
}
