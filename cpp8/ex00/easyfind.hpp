/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:37 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 16:30:38 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <vector>
# include <deque>
# include <algorithm>
# include <iostream>

class NotFoundException : public std::exception
	{ virtual char const * what () const throw (); };

template< typename T >
typename T::iterator	easyfind(T & container, int n)
{
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();

	typename T::iterator val = find(it, ite, n);
	if (val == ite)
		throw NotFoundException();
	return (val);
}
#endif
