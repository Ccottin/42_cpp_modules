/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:31:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/08/15 11:56:10 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

char	*to_upper(char *str)
{
	int	i;
	std::locale	loc;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i], loc);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;
	
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			av[i] = to_upper(av[i]);	
			std::cout << av[i] << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
