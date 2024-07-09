/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:25:42 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/09 12:49:46 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

template <typename T>
void print(const T& data)
{
	std::cout << data << std::endl;
}

int main( void )
{
	int arrayInt[] = {1, 2, 3, 4, 5};
	std::cout << "Int array :" << std::endl;
	iter(arrayInt, 5, print);

	std::cout << std::endl;

	char arrayChar[] = {'q', 'w', 'e', 'r', 't', 'y'};
	std::cout << "Char array :" << std::endl;
	iter(arrayChar, 6, print);
	return 0;
}