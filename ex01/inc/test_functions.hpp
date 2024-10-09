/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:34:44 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/09 17:01:23 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FUNCTIONS_HPP
# define TEST_FUNCTIONS_HPP

# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define BLUE "\e[94m"
# define PURPLE "\e[95m"
# define CYAN "\e[96m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

# include <iostream>

template<typename T>
void	ft_cout( T &var ) {
	std::cout << var << ", ";
}

template<typename T>
void	add_one( T &var ) {
	var += 1;
	ft_cout(var);
}

void	upper( std::string text );

#endif