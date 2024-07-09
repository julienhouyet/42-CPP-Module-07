/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:55:32 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/09 17:06:10 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

// ************************************************************************** //
//                              Array Class                                   //
// ************************************************************************** //

template <typename T>
Array<T>::Array() : _data(nullptr), _size(0)
{

}

template <typename T>
Array<T>::Array( unsigned int nbr)
{

}

template <typename T>
Array<T>::Array( const Array& copy ) 
{

}

template <typename T>
Array<T>& Array<T>::operator=( const Array& copy )
{

}

template <typename T>
Array<T>::~Array( void )
{
	
}