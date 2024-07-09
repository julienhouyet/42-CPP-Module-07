/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:55:32 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/09 18:06:32 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <stdexcept>

// ************************************************************************** //
//                              Array Class                                   //
// ************************************************************************** //

template <typename T>
Array<T>::Array() : _data(nullptr), _size(0)
{

}

template <typename T>
Array<T>::Array( unsigned int nbr) : _data(new T[nbr]), _size(nbr)
{
	for (unsigned int i = 0; i < nbr; ++i) {
		_data[i] = T();
	}
}

template <typename T>
Array<T>::Array( const Array& copy ) 
{
    for (unsigned int i = 0; i < this->_size; ++i) {
		this->_data[i] = copy._data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=( const Array& copy )
{
    if (this != &copy) {
        delete[] this->_data;
        this->_size = copy._size;
        this->_data = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i) {
			this->_data[i] = copy._data[i];
		}
    }
    return *this;
}

template <typename T>
Array<T>::~Array( void )
{
	delete[] this->_data;
}