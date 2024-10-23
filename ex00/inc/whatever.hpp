/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:42:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/23 17:38:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# define YELLOW "\e[93m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

template <typename T>
void	swap( T &a, T &b ) {
	T	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T&	min( const T &a, const T &b ) {
	return (a < b ? a : b);
}

template <typename T>
const T&	max( const T &a, const T &b ) {
	return (a > b ? a : b);
}

#endif
