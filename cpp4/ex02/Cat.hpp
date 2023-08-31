/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/19 01:37:29 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat  : public AAnimal {

	public :
		
		Cat(void);
		Cat(Cat const & ref);
		Cat &operator=(Cat const & ref);
		virtual ~Cat(void);
		
		void				makeSound(void) const;

		std::string	const	getIdea(int index) const;
	
	protected :
	
	private :
		
		Brain	*_brain;
};

#endif
