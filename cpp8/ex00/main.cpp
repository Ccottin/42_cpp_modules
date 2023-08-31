/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:14:52 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 16:43:29 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char	*NotFoundException::what () const throw ()
{
	return ("No occurence of number in container");
}

void	ft_list(void)
{
	std::cout << "Trying for list\n" << std::endl;
	std::list<int> lst(10, 41);
	try
	{
		std::list<int>::iterator i = easyfind(lst, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		lst.push_back(42);
		std::list<int>::iterator i = easyfind(lst, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_vector(void)
{
	std::cout << "\nTrying for vector\n" << std::endl;
	std::vector<int> vct(2, 54);
	try
	{
		std::vector<int>::iterator i = easyfind(vct, 42); 
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		vct.push_back(42);
		std::vector<int>::iterator i = easyfind(vct, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_deque(void)
{
	std::cout << "\nTrying for deque\n" << std::endl;
	std::deque<int> deq(2, 54);
	try
	{
		std::deque<int>::iterator i = easyfind(deq, 42); 
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		deq.push_back(42);
		std::deque<int>::iterator i = easyfind(deq, 42);
		std::cout << "Value Type = " <<  *i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	ft_list();
	ft_vector();
	ft_deque();
}
