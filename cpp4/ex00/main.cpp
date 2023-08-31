/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:05:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/17 03:03:59 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	ft_more_test(void)
{
	const Animal * A = new Animal("Bird");
	std::cout << A->getType() << std::endl;;
	A->makeSound();
	const Cat * B = new Cat();
	std::cout << B->getType() << std::endl;;
	B->makeSound();
	const Animal * C = B;
	C->makeSound();
	delete A;
	delete B;
}

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound(); //will output the cat sound!
		j->makeSound();
	
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();
		const WrongCat* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		j->makeSound(); //will output Animal sound!
		i->makeSound(); //will output Cat sound!
		
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	ft_more_test();
	return 0;
}
