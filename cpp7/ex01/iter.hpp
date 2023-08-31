/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:05:59 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/24 09:41:03 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template< typename T >
void	iter(T const *tab, unsigned int const size, void f(T const &arg))
{
	unsigned int i = 0;
	
	for (i = 0; i < size; i++)
		f(tab[i]);
}

template< typename T >
void	ft_print(T const var)
{
	std::cout << var << std::endl;
}

#endif
