/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:22:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/08/15 15:16:23 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_nbcontact = 0;

Contact::Contact(void)
{
	std::cout << "Create contact" << Contact::_number << "\n";
	this->_number = Book::getnbcontact();
	cout << "Enter a ame :\n";
	cin >> this->first_name;
	cout << "Enter a Name :\n";
	cin >> this->first_name;
	cout << "Enter a Name :\n";
	cin >> this->first_name;
//les constructeurs servent a remplir les infos et pas juste afaire joli spece de tanche, avoir si lecpp te permet de tout deplacer dan
// un tableau quand tu supprimes le premier element + les leaks 
	_NbContact++;
}

Contact::~Contact(void)
{
	std::cout << "Destroy contact " << Contact::_number << "\n";
	_NbContact--;
}

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to your empty phonebook, Human" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook closed and destroyed" << std::endl;
}

PhoneBook::getnbcontact(void)
{
	return (_NbContact);
}

PhoneBook::add_fonction(PhoneBook Book)
{
	if (Phone::GetNbContact() < 8)
		create_new_contact(Book);
}

PhoneBook::search_fonction(void)
{
//pour le search il yasurement a creuser du cote de iomanip avec les set widht
}

int	ft_phonebook(PhoneBook Book)
{
	std::string	str;
	
	str << std::cin;
	if (!str)
		return (1);
	if (!str.compare("ADD"))
		return (add_fonction(Book));
	else if (!str.compare("SEARCH"))
		return (search_foncton());
	else if (!str.compare("EXIT"))
		return (0);
}

int	main(int ac, char *av)
{
	PhoneBook	Book;

	if (ac != 1)
		return (0);
	while (ft_phonebook(Book))
	{

	}
	return (0);	
}
