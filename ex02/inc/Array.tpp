/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:00:55 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/09 19:26:15 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"


// Default constructor
template<typename T>
Array<T>::Array( void ) : array(new T[0]), length(0) {
	//std::cout << "Array default constructor called" <<std::endl;
}

// Constructor
template<typename T>
Array<T>::Array( unsigned int n ) : length(n) {
	//std::cout << "Array default constructor called" <<std::endl;
	array = new T[n];
}

// Copy constructor
template<typename T>
Array<T>::Array( const Array &src ) {
	//std::cout << "Array copy constructor called" << std::endl;

	length = src.size();
	array = new T[length];

	for (unsigned int i; i < length; i++)
		array[i] = src.array[i];
}

// Destructor
template<typename T>
Array<T>::~Array( void ) {
	//std::cout << "Array destructor called" <<std::endl;
	delete[] array;
}

// -----------------------------------Operators---------------------------------
// Copy assignment operator overload
template<typename T>
Array<T> &Array<T>::operator = ( const Array &src ) {
	// std::cout << "Array copy assignment operator called" << std::endl;
	delete[] this->array;

	this->length = src.size();
	this->array = new T[this->length];

	for (unsigned int i = 0; i < this->length; i++)
		this->array[i] = src.array[i];
	return (*this);
}

// Subscript operator overload
template<typename T>
T &Array<T>::operator [] ( unsigned int n ) const {
	//std::cout << "Array subscript operator called" << std::endl;
	if (n >= length)
		throw(OutOfBounds());

	return (this->array[n]);
}

// -----------------------------------Methods-----------------------------------
template<typename T>
unsigned int	Array<T>::size( void ) const {
	return (this->length);
}

// -----------------------------------Exceptions--------------------------------
template<typename T>
const char *Array<T>::OutOfBounds::what( void ) const throw() {
	return ("Index is out of bounds");
}
