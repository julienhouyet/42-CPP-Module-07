/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:43:00 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/08 09:59:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int	main()
{
	int a = 1;
	int b = 20;
	
	std::cout << "Values : a = " << a << ", b = " << b << std::endl;

	std::cout << std::endl;
    
	swap(a, b);
	
	std::cout << "Swapping : a = " << a << ", b = " << b << std::endl;

	std::cout << std::endl;
    
	std::cout << "Min: " << min(a, b) << std::endl;

	std::cout << std::endl;
	
	std::cout << "Max: " << max(a, b) << std::endl;

	std::cout << std::endl;
	
	std::cout << "----------------------------" << std::endl;

	std::cout << std::endl;

	double x = 1.1;
	double y = 2.2;
	
	std::cout << "Values : x = " << x << ", y = " << y << std::endl;

	std::cout << std::endl;
    
	swap(x, y);
	
	std::cout << "Swapping : x = " << x << ", y = " << y << std::endl;

	std::cout << std::endl;
    
	std::cout << "Min: " << min(x, y) << std::endl;

	std::cout << std::endl;
	
	std::cout << "Max: " << max(x, y) << std::endl;

	return 0;
}