/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:13:57 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 22:16:12 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	Harl1;

	std::cout << "debug level\n" << std::endl;
	Harl1.complain("DEBUG");
	std::cout << "\n\n";
	std::cout << "info level\n" << std::endl;
	Harl1.complain("INFO");
	std::cout << "\n\n";
	std::cout << "warning level\n" << std::endl;
	Harl1.complain("WARNING");
	std::cout << "\n\n";
	std::cout << "error level\n" << std::endl;
	Harl1.complain("ERROR");
	Harl1.complain("grvp");
}
