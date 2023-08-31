/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:57:55 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/10 20:15:24 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include "Zombie.hpp"

void	NewYork(Zombie *Horde)
{
	int	i;
	int	n;

	std::cout << "\nSo we lived main fonction to come here, at NYCity, so we can finally";
	std::cout << " relax and enjoy thoses gorgerous pieces of pizza\n" << std::endl;
	i = 0;
	n = Horde->getNumber();
	while (i < n)
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "The Horde is taking over New York! Noooooooooooo!\n";
}

int	main(void)
{
	std::string	name = "The Horde";

	Zombie *Horde = zombieHorde(42, name);
	Horde[0].announce();
	Horde->announce();
	NewYork(Horde);
	std::cout << "Back to main fonction!" << std::endl << std::endl;
	delete [] Horde;
}
