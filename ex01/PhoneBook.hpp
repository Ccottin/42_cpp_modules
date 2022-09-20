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
	void		search_fonction(void);
	void		add_fonction(void);
	void		print_fonction(int nb);

private :

	static int	_nbcontact;
	Contact		contacts[8];
};

#endif
