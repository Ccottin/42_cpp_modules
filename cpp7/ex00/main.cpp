/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:05:06 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/24 10:14:10 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	/* explicit instanciation */
	
	{
		int	a = 42;
		int	b = 7;
		
		std::string	s1 = "Coucou";
		std::string	s2 = "Salut";


		std::cout << "max = " << ::max<int>(a, b) << std::endl;
		std::cout << "min = " << ::min<int>(a, b) << std::endl;
		std::cout << a << ", " << b <<std::endl << "Swapi-swap!" << std::endl;
		::swap(a , b);
		std::cout << a << ", " << b <<std::endl;
		std::cout << "max = " << ::max<std::string>(s1, s2) << std::endl;
		std::cout << "min = " << ::min<std::string>(s1, s2) << std::endl;
		std::cout << s1 << ", " << s2 <<std::endl << "Swapi-swap!" << std::endl;
		::swap(s1 , s2);
		std::cout << s1 << ", " << s2 <<std::endl;
	}
	std::cout << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}
