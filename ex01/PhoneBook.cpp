/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:22:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/09/12 20:51:20 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include <iostream>

int	PhoneBook::_nbcontact = 1;

Contact::Contact(int number) :  _number(number)
{
	std::cout << "Create contact" << this->_number << "\n";
	std::cout << "Enter a firstname :\n";
	std::cin >> this->_first_name;
	std::cout << "Enter a lastname :\n";
	std::cin >> this->_last_name;
	std::cout << "Enter a nickname :\n";
	std::cin >> this->_nickname;
	std::cout << "Enter a phone number:\n";
	std::cin >> this->_phone_number;
	std::cout << "Enter contact darkest secret :\n";
	std::cin >> this->_darkest_secret;
//les constructeurs servent a remplir les infos et pas juste afaire joli spece de tanche, avoir si lecpp te permet de tout deplacer dan
// un tableau quand tu supprimes le premier element + les leaks 
}

Contact::~Contact(void)
{
	std::cout << "Destroy contact " << this->_number << "\n";
}

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to your empty phonebook, Human" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook closed and destroyed" << std::endl;
}

int		PhoneBook::getnbcontact(void)
{
	return (_nbcontact);
}

void		PhoneBook::destroy_fonction(int	nb, Contact contact)
{
	Contact::~Contact;
	this->_nbcontact--;
}

int		PhoneBook::add_fonction(PhoneBook Book)
{
	if (PhoneBook::getnbcontact() < 9)
	{
		Contact(this->_nbcontact);
		this->_nbcontact++;
	}
}
/*
int		PhoneBook::search_fonction(void)
{
//pour le search il yasurement a creuser du cote de iomanip avec les set widht
}*/

int		ft_phonebook(PhoneBook Book)
{
	std::string	str;
	
	getline(std::cin, str);
	if (!str.compare("ADD"))
		return (add_fonction(Book));
//	else if (!str.compare("SEARCH"))
//		return (search_fonction());
	else if (!str.compare("EXIT"))
		return (0);
}

int	main(int ac, char **av)
{
	PhoneBook	Book;

	(void)av;
	if (ac != 1)
		return (0);
	while (ft_phonebook(Book))
	{
		
	}
	return (0);	
}
