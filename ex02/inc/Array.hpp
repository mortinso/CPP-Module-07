/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:09:53 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/09 19:23:44 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

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

template<class T>
class Array {
	private:
		T				*array;
		unsigned int	length;

	public:
		// Constructors
		Array( void );
		Array( unsigned int n );
		Array( const Array &src );

		// Destructor
		~Array( void );

		// Operator overloads
		Array &operator = ( const Array &src );
		T &operator [] (unsigned int n) const;

		// Methods
		unsigned int	size( void ) const;

		// Exceptions
		class OutOfBounds : public std::exception {
			public:
				const char *what( void ) const throw();
		};
};

# include "Array.tpp"
#endif
