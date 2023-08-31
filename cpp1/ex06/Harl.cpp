/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:07:20 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 23:09:07 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(void) { } 

Harl::~Harl(void) { }

void	Harl::_filtered_Harl(void (Harl::*tab[4])(void), std::string tab2[4], int i, std::string level)
{
	while (i < 4)
	{
		if (!tab2[i].compare(level))
			(this->*(tab[i]))() ;
		i++;
	}
}

void	Harl::complain(std::string level, std::string filter)
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
	int	i;

		for (i = 0; i < 4; i++)
		{
			if (!tab2[i].compare(filter))
				break ;
		}
		switch (i) 
		{
			case 0 :
				_filtered_Harl(tab, tab2, 0, level);
				break;
			case 1 :
				_filtered_Harl(tab, tab2, 1, level);
				break;
			case 2 :
				_filtered_Harl(tab, tab2, 2, level);
				break;
			case 3 :
				_filtered_Harl(tab, tab2, 3, level);
				break;
			default :
				std::cout << "[ Probably complaining about in"
				"significant problems ]" << std::endl;
		}
}

void	Harl::_debug(void) {
	std::cout << "\ndebug level" << std::endl;
	std::cout << "Harl just enjoy to complain, for the good sake of complaining,"
	" that's right!" << std::endl;
}

void	 Harl::_info(void) {
	std::cout << "\ninfo level" << std::endl;
	std::cout << "Harl loves complaining, bt y'know, sometimes you better p"
	"ay attention to what he says, that could be important y'know" << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "\nwarning level" << std::endl;
	std::cout << "Oh Jeez Oh Jeez! What did I said about listening to Harl "
	"complain? Shits are getting serious y'know?" << std::endl;
}

void	Harl::_error(void) {
	std::cout << "\nerror level" << std::endl;
	std::cout << "Alright that's it! I quit! and I quit for good! What's "
	"that? What do you mean by I cannot be free? Oh Jee, are you saying I'"
	"m a program inside a computer?" << std::endl;
}
