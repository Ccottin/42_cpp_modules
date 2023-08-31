/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:13:47 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 22:16:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(void) { } 

Harl::~Harl(void) { }
	
void	Harl::complain(std::string level)
{
	void 		(Harl::*tab[4])(void) = {
			&Harl::_debug,
			&Harl::_info,
			&Harl::_warning,
			&Harl::_error
			};

	std::string	tab2[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
			};

		for (int i = 0; i < 4; i++)
		{
			if (!tab2[i].compare(level))
				(this->*tab[i])();
		}
}

void	Harl::_debug(void) {
	std::cout << "Harl just enjoy to complain, for the good sake of complaining,"
	" that's right!" << std::endl;
}

void	 Harl::_info(void) {
	std::cout << "Harl loves complaining, bt y'know, sometimes you better p"
	"ay attention to what he says, that could be important y'know" << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "Oh Jeez Oh Jeez! What did I said about listening to Harl "
	"complain? Shits are getting serious y'know?" << std::endl;
}

void	Harl::_error(void) {
	std::cout << "Alright that's it! I quit! and I quit for good! What's "
	"that? What do you mean by I cannot be free? Oh Jee, are you saying I'"
	"m a program inside a computer?" << std::endl;
}
