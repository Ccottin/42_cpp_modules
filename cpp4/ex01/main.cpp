/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:05:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/19 01:31:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <typeinfo>

/*	this is already consider as Animal for compilater,
	even if we create dog or cat for eveyr line it will not
	work. This is an example of what you should not do */

void	ft_mandatory2(void)
{
	Animal	*tab = new Animal[8];
	
	int	i;

	for (i = 0; i < 4; i++)
		tab[i] = Dog();
	for (i = 4; i < 8; i++)
		tab[i] = Cat();
	tab[3].makeSound();
	tab[7].makeSound();
	std::string s = typeid(tab[3]).name();
	std::cout << s << std::endl;
	delete [] tab;
}

void	ft_mandatory(void)
{
	std::cout << "Mandatory Test" << std::endl;
	Animal	*tab[8];
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

void	ft_brain(void)
{
	{
		Brain	brain;
	std::cout <<  std::endl;
		Brain	rebrain("Cat");
	std::cout <<  std::endl;
		Brain	another(rebrain);
	std::cout <<  std::endl;
		Brain	oneMore;
		oneMore = another;
	std::cout <<  std::endl;

		std::cout << brain.getIdea(100) << std::endl;
		std::cout << brain.getIdea(99) << std::endl;
		std::cout << rebrain.getIdea(-1) << std::endl;
		std::cout << rebrain.getIdea(1) << std::endl;
		std::cout << another.getIdea(2147483647) << std::endl;
		std::cout << another.getIdea(47) << std::endl;
		std::cout << oneMore.getIdea(5) << std::endl;
		std::cout << oneMore.getIdea(-4321) <<  std::endl;
	}
	Brain	brain("Bird");
	std::cout << brain.getIdea(100) << std::endl;
	std::cout << brain.getIdea(99) << std::endl;
}

	/*	std::string s = typeid(j).name();			*/
	/*	std::cout << s << std::endl;				*/
	/*	typeid te permet de savoir de quel type		*/
	/*	est ta classe et a chercher un peu vu que	*/
	/*	c une classe quels sont les autres bailz	*/

int	main(void)
{
	{	
		std::cout << "main example" <<  std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;

		std::cout <<  std::endl;
		std::cout << "Something else" << std::endl;

		const Dog* h = new Dog();
		const Cat* g(new Cat());

		h->makeSound();
		std::cout << h->getType() << std::endl;
		std::cout << h->getIdea(80) << std::endl;
		g->makeSound();
		std::cout << g->getType() << std::endl;
		std::cout << g->getIdea(80) << std::endl;

		delete h;
		delete g;
	}
	std::cout <<  std::endl;
	std::cout << "Brain Test" << std::endl;
	ft_brain();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
//	ft_mandatory();// asked in subject but pretty messy
	std::cout <<  std::endl;
//	ft_mandatory2(); //a bad way to implement tab

	Dog* h = new Dog();
	Cat* g(new Cat());

	std::cout << h->getType() << std::endl;
	h->makeSound();
	std::cout << h->getIdea(42) << std::endl;
	std::cout <<  std::endl;
	std::cout << g->getType() << std::endl;
	g->makeSound();
	std::cout << g->getIdea(42) << std::endl;

	std::cout <<  std::endl;
	delete h;
	std::cout <<  std::endl;
	delete g;
	std::cout <<  std::endl;

	return 0;
}
