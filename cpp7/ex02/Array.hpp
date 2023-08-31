/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:16:15 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/23 17:52:32 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <ctime>		//for mandatory test
# include <cstdlib>		//for mandatory test
# define MAX_VAL 750	//for mandatory test

template< typename T >
class	Array {

	public :
		Array(void);
		Array(unsigned int n);
		Array(Array const &ref);
		Array &operator=(Array const &ref);
		virtual ~Array(void);

		T	 &operator[](int const n);
		unsigned int const	&size(void) const;

		class	IncorrectIndexException : public std::exception
		{ virtual const char * what() const throw()
			{return ("Index selected is not correct");} };
	
	private :
		unsigned int	_size;
		T			*	_array;
};

# include "Array.tpp"
#endif
