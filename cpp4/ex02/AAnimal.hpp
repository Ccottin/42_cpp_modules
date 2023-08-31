/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 05:26:26 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	AAnimal {

	public :
		
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(AAnimal const & ref);
		AAnimal &operator=(AAnimal const & ref);
		virtual ~AAnimal(void);

		void			setType(std::string type);
		std::string const	getType(void) const;
		virtual void		makeSound(void) const = 0;
	
	protected :

		std::string	type_;

	private :
	
};

#endif
