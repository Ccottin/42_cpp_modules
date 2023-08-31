/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:05:01 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:17 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	subject_test(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

void	all_ref_test(Weapon & Sword, Weapon & Bow)
{
	HumanA Jeel("Jeel", Sword);
	Jeel.attack();
	Sword.setType("longsword");
	Jeel.attack();
	HumanB Marcel("Marcel");
	Marcel.attack();
	Marcel.setWeapon(Bow);
	Marcel.attack();
	Marcel.setWeapon(Sword);
	Marcel.attack();
	Sword.setType("broadsword");
	Marcel.attack();
	Jeel.attack();
}

void	all_pointer_test(Weapon * Hammer, Weapon * Sling)
{
	HumanA Angie("Angie", *Hammer);
	Angie.attack();
	HumanB Beatrix("Beatrix");
	Beatrix.attack();
	Beatrix.setWeapon(*Hammer);
	Angie.attack();
	Beatrix.attack();
	Hammer->setType("sledgehammer");
	Angie.attack();
	Beatrix.attack();
	Beatrix.setWeapon(*Sling);
	Beatrix.attack();
}

int	main(void)
{
	subject_test();
	std::cout << "\n\n\n";
	{
		Weapon Sword("sword");
		Weapon & sword = Sword;
		Weapon Bow("bow");
		Weapon & bow = Bow;
		all_ref_test(sword, bow);
	}
	std::cout << "\n\n\n";
	{
		Weapon Hammer("hammer");
		Weapon * hammer = &Hammer;
		Weapon Sling("sling");
		Weapon * sling = &Sling;
		all_pointer_test(hammer, sling);
	}
}
