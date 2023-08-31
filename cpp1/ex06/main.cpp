/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:07:25 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 23:07:28 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl		Harl1;
	std::string	filter;	
	std::string	tab2[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
			};
	int		i;

	if (ac != 2)
		return (0);
	filter = av[1];
	for (i = 0; i < 4; i++)
	{
		if (!filter.compare(tab2[i]))
			break ;
	}
	if (i == 4)
	{
		Harl1.complain("nothing", filter);
		return (0);
	}
	Harl1.complain("DEBUG", filter);
	Harl1.complain("INFO", filter);
	Harl1.complain("WARNING", filter);
	Harl1.complain("ERROR", filter);
}
