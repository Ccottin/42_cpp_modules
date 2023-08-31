/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/19 00:00:49 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal {

	public :
		
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & ref);
		Animal &operator=(Animal const & ref);
		virtual ~Animal(void);

		std::string const	getType(void) const;
		void				setType(std::string type);
		virtual void		makeSound(void) const;
	
	protected :

		std::string	type_;

	private :
	
};

/* Si on enleve le mot cle virtual, les tests de ft_mandatory  */
/* prendront la fonction makeSound de Animal et non de cat/dog */

#endif
