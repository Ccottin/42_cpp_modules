/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 21:19:33 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class	WrongCat  : public WrongAnimal {

	public :
		
		WrongCat(void);
		WrongCat(WrongCat const & ref);
		WrongCat &operator=(WrongCat const & ref);
		virtual ~WrongCat(void);
		
		void	makeSound(void) const;
	
	protected :
	
	private :

};

#endif
