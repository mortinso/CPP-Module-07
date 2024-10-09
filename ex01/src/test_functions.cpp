/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:47:05 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/09 16:59:39 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/test_functions.hpp"

void	upper( std::string text ) {
	for (unsigned int i = 0; i < text.length(); i++)
		text[i] = toupper(text[i]);
	::ft_cout(text);
}