/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:55:32 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/10 07:46:03 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
Array<T>::Array( const Array& copy ) : _data(new T[copy._size]), _size(copy._size)
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

// ************************************************************************** //
//                          Public Member Functions                           //
// ************************************************************************** //

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size || index < 0)
	{
		throw std::out_of_range("Index out of range");
	}
	return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size || index < 0)
	{
		throw std::out_of_range("Index out of range");
	}
	return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}