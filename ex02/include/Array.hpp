/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:52:02 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/10 07:46:05 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

// ************************************************************************** //
//                              Array Class                                   //
// ************************************************************************** //

template<typename T>
class Array
{
	public:
		Array();
		Array( unsigned int nbr);
		Array( const Array& copy );
		Array& operator=( const Array& copy );
		~Array( void );

		unsigned int size() const;

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		
	private:
		T* 				_data;
		unsigned int	_size;
};

#include "../src/Array.tpp"

#endif