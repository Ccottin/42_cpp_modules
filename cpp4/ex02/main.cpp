/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:05:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/19 01:41:26 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	ft_mandatory(void)
{
	AAnimal	*tab[8];
	int	i;

	for (i = 0; i < 4; i++)
		tab[i] = new Dog();
	for (i = 4; i < 8; i++)
		tab[i] = new Cat();
	tab[0]->makeSound();
	tab[4]->makeSound();
	
	for (i = 0; i < 8; i++)
		delete tab[i];
}

int	main(void)
{
	{	
	//	const AAnimal* j = new Dog(); Not Working anymore
	//	const AAnimal* i = new Cat();
		
		const	Dog * j = new Dog();
		const	Cat * i = new Cat();
		delete j;		delete i;

		std::cout << std::endl;

		const Dog* h = new Dog();
		const Cat* g(new Cat());

		h->makeSound();
		std::cout << h->getType() << std::endl;
		std::cout << h->getIdea(42) << std::endl;
		g->makeSound();
		std::cout << g->getType() << std::endl;
		std::cout << g->getIdea(58) << std::endl;

		delete h;
		delete g;
	}
	
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	ft_mandatory();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	
	return 0;
}
