/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:56:53 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 14:56:56 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

public :

	Zombie(std::string name);
	~Zombie(void);
	void		announce(void);

private :

	std::string	_name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
