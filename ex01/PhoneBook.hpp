/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:07:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/08/15 15:11:36 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "PHONEBOOK_HPP"
# define "PHONEBOOK_HPP"
# include "Contact.hpp"
# include <iostream>

class	PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);
	Contact		setcontact(void);
	static int	getnbcontact(void);
	int		add_fonction(void);
	int		search_fonction(void);

private :
	Contact		Contacts[8];
	static int	_nbcontact;
};

#endif
