/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:17:18 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/24 09:41:18 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int tab[] = {
		1,
		8,
		9,
		789,
		-9874,
		245
		};
	iter(tab, 6, ft_print);

	std::string	tab2[] = {
		"Coucou",
		"Hello",
		"Bonsoir"
		};
	iter(tab2, 3, ft_print);

	double tab3[] = {
		789.546,
		0.0,
		563219794513.156
		};
	iter(tab3, 3, ft_print);

	float tab4[] = {
		1.2f
		};
	iter(tab4, 1, ft_print);

	char tab5[] = {
		'f',
		'$',
		'~',
		'-'
		};
	iter(tab5, 4, ft_print);

	char tab6[] = { };
	iter(tab6, 0, ft_print);

}
