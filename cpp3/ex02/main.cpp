/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:00:08 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:00:10 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{	
	{
		FragTrap	one;

		one.highFivesGuys();
		std::cout << "FragTrap ep = " << one.getEp() << std::endl;
	}

	std::cout << std::endl << std::endl;
	FragTrap	one("One");
	ClapTrap	two("Two");
	ScavTrap	three("Three");	

	one.attack("Two");
	two.takeDamage(one.getDmg());
	two.beRepaired(100);
	one.attack("Three");
	three.takeDamage(one.getDmg());
	three.guardGate();
	std::cout << "\n\nOne enters RAGEMODE AND TRIES TO BREAK THE DOOR D:" << std::endl;
	while (one.getEp() > 0)
	{
		if (three.getHp() < 40) //value to change 
			three.beRepaired(100);
		one.attack("Three");
		three.takeDamage(one.getDmg());
	}
	std::cout << std::endl;
	one.attack("Three");
	if (three.getHp() > 0)
	{
		std::cout << three.getClassName() << " " << three.getName()
		<< " did a great job keeping the door! Still having "
		<< three.getHp() << " hp and " << three.getEp() 
		<< " ep" << std::endl;
	}
	else
		std::cout << one.getClassName() << " " << one.getName()
		<< " broke "  << three.getClassName() << " " << three.getName()
		<< " who didn't stand a chance..." << std::endl;		
}
