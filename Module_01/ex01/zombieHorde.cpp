/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:56:35 by icheri            #+#    #+#             */
/*   Updated: 2022/06/01 10:17:09 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, string name)
{
	Zombie *zom;
	zom = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zom[i].set_name(name);
		zom[i].announce();
	}
	return(zom);
}
