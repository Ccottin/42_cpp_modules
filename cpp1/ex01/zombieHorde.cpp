/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:58:35 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 14:58:37 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	Zombie *Horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}
