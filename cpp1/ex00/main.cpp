/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:56:09 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 14:56:12 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

void	randomChumpTest(void)
{
	std::string	name = "Random";

	std::cout << "Zombie Name is " << name << std::endl;
	randomChump(name);
	std::cout << "\n\n\n";
}

Zombie	*newZombieTest(void)
{	
	Zombie		*Z;
	std::string	name = "Zombie";

	std::cout << "Zombie Name is " << name << std::endl;
	Z = newZombie(name);
	return (Z);
}

void	DallasCity(Zombie* Cramberries)
{
	std::cout << "Welcome to DallasCity Fonction" << std::endl;
	Cramberries->announce();
	std::cout << "Oh god! The Cramberries made it to DallasCity! Run!" << std::endl;
}

int	main(void)
{
	std::cout << "A randomChump is created" << std::endl;
	randomChumpTest();
	std::cout << "Back to main fonction!"  << std::endl << std::endl;
	std::cout << "A newZombie is created" << std::endl;
	
	Zombie* Cramberries = newZombieTest();
	std::cout << "Back to main fonction!"  << std::endl << std::endl;
	Cramberries->announce();
	DallasCity(Cramberries);
	std::cout << "Back to main fonction!"  << std::endl << std::endl;
	delete Cramberries;
}
