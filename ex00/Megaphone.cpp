/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:31:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/08/03 12:58:39 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char **str)
{
	int	i;

	i = 0;
	while ((*str)[i])
	{
		(*str)[i] = (*str)[i] - 32;
		i++;
	}
}

void	ft_megaphone(int ac, char **av)
{
	int	i;
	
	i = 1;
	while (i < ac)
	{
		to_upper(&(av[i]));
		i++;
	}
	i = 1;
	while (i < ac)
	{
		std::cout << av[i] << std::endl;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_megaphone(ac, av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
