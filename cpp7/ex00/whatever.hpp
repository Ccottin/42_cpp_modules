/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:05:59 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/24 09:30:35 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template< typename T >
T const	&max (T const &x, T const &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

template< typename T >
T const	&min (T const &x, T const &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template< typename T >
void	swap (T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

#endif
