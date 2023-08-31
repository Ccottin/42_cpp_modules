/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:58:46 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 22:50:41 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <climits>
#include <ctime>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

class	Span
{
	public :
		
		Span(unsigned int n);
		Span(Span const &ref);
		Span	&operator=(Span const &ref);
		~Span(void);
		
		void				addNumber(int);
		void				addMoreNumbers(unsigned int n);
		void				insertNumbers(unsigned int const pos,
									unsigned int const n, int const &val);
		unsigned int			shortestSpan(void) const;
		unsigned int			longestSpan(void) const;
		unsigned int			getSize(void) const;
		void					printArray(void) const;
		std::vector<int>const 	&getArray(void) const;

		class TooMuchException : public std::exception 
		{ virtual char const * what() const throw(); };
		class NotEnoughException : public std::exception 
		{ virtual char const * what() const throw(); };

	private :

	Span(void);
	unsigned int		_size;
	std::vector<int>	_array;
};

#endif
