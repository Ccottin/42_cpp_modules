/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:16:15 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/23 15:07:04 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template< typename T >
Array<T>::Array(void) : _size(0)
{
	std::cout << "Default constructor called" << std::endl;
	_array = NULL;
}
		
template< typename T >
Array<T>::Array(unsigned int const n) : _size(n)
{
	std::cout << "Size constructor called" << std::endl;
	_array = new T[n];
}

template< typename T >
Array<T>::Array(Array const &ref) : _size(ref.size())
{
	std::cout << "Copy constructor called" << std::endl;
	
	if (this->size() > 0)
	{
		this->_array = new T[this->size()];
		for (unsigned int i = 0; i < this->size(); i++)
			this->_array[i] = ref._array[i];
	}
	else if (this->size() == 0)
		this->_array = NULL;
}

template< typename T >
Array<T>	&Array<T>::operator=(Array const &ref)
{
	std::cout << "Assignement operator called" << std::endl;
	const unsigned int	size = ref.size();
	
	this->_size = size;
	if (this != &ref && size > 0)
	{
		if (this->_array)
			delete [] (this->_array);
		this->_array = new T[size];
		for (unsigned int i = 0; i < size; i++)
			this->_array[i] = ref._array[i];
	}
	else if (this != &ref && size == 0)
	{	
		if (this->_array)
			delete [] (this->_array);
		this->_array = NULL;
	}
	return (*this);
}

template< typename T >
Array<T>::~Array(void)
{
	std::cout << "Destructor Called" << std::endl;
	if (size() > 0 && this->_array)
		delete [] _array;
}

template< typename T >
T	&Array<T>::operator[](int const n)
{
	if (!this->_array || n < 0
		|| static_cast<unsigned int>(n) > size() - 1)
		throw IncorrectIndexException();
	return (this->_array[n]);
}
		
template< typename T >
unsigned int const 	&Array<T>::size(void) const
{
	return (_size);
}

#endif
