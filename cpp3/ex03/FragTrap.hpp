/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:00:38 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 18:40:21 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public :
	
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & c);
	FragTrap &operator=(FragTrap const & c);
	~FragTrap(void);
	
	void	highFivesGuys(void);
	
	private :

};

#endif
