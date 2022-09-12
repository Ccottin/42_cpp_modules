/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:07:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/09/12 21:18:30 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class	PhoneBook {

public :

	PhoneBook(void);
	~PhoneBook(void);
	Contact		setcontact(void);
	static int	getnbcontact(void);
	int		add_fonction(void);
	int		search_fonction(void);
	void		destroy_fonction(int nb, Contact contact);

private :
	static int	_nbcontact;
	Contact		*contacts;
};

#endif
