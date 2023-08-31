/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:00:54 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/10 20:14:07 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str;
	std::string*	stringPTR;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string&	stringREF = str;
	
	std::cout << "adresse de str = " << &str << std::endl;
	std::cout << "adresse de PTR = " << stringPTR << std::endl;
	std::cout << "adresse de REF = " << &stringREF << std::endl << std::endl;

	std::cout << "valeur de str = " << str << std::endl;
	std::cout << "valeur de PTR = " << *stringPTR << std::endl;
	std::cout << "valeur de REF = " << stringREF << std::endl;
	return (0);
}
