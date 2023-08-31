/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:58:49 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 22:50:03 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0)
{

}

Span::Span(unsigned int n) : _size(n)
{
	
}

Span::Span(Span const &ref) :	_size(ref.getSize()),
								_array(ref.getArray())
{

}

Span	&Span::operator=(Span const &ref)
{
	if (this != &ref)
	{
		this->_size = ref.getSize();
		this->_array = ref.getArray();
	}
	return (*this);
}

Span::~Span(void)
{

}

std::vector<int>	const &Span::getArray(void) const
{
	return (_array);
}

unsigned int	Span::getSize(void) const
{
	return (_size);
}

void			Span::addNumber(int n)
{
	if (getSize() == 0 || _array.size() == getSize())
		throw TooMuchException();
	_array.push_back(n);
}

void			Span::insertNumbers(unsigned int pos, unsigned int n, int const &val)
{
	if (pos > _array.size() || getSize() == 0)
		throw NotEnoughException();
	if (_array.size() + n > _size || pos > _size)
		throw TooMuchException();
	_array.insert(_array.begin() + pos, n, val);
}

void			Span::addMoreNumbers(unsigned int n)
{
	if (getSize() == 0)
		throw NotEnoughException();
	if (n > getSize())
		throw TooMuchException();
	srand(time(NULL));
	while (n > 0)
	{
		addNumber(std::rand()%RAND_MAX);
		n--;
	}
}

unsigned int	Span::shortestSpan(void) const
{
	if (getSize() == 0 || _array.size() < 2)
		throw NotEnoughException();
	
	unsigned int	ret = UINT_MAX;
	unsigned int	diff = UINT_MAX;
	std::vector<int> tmp = _array;
	
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator ite = tmp.end();
	while (it != ite - 1)
	{
		diff = abs(*it - *(it + 1));
		if (ret > diff)
			ret = diff;
		it++;
	}
	return (ret);
}
unsigned int	Span::longestSpan(void) const
{
	if (getSize() == 0 || _array.size() < 2)
		throw NotEnoughException();
	
	std::vector<int> tmp = _array;

	std::sort(tmp.begin(), tmp.end());
	return (*tmp.rbegin() - *tmp.begin());
}

void			Span::printArray(void) const
{
	unsigned int	size = _array.size();
	for (unsigned int i = 0; i < size; i++)
		std::cout << _array[i] << std::endl;
	std::cout << "total elements = " << _array.size() << std::endl;
}

const char *	Span::TooMuchException::what() const throw()
{
	return ("Too many elements in array");
}

const char *	Span::NotEnoughException::what() const throw()
{
	return ("Not enough elements or space in array");
}

