/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   New_Zombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:08:09 by icheri            #+#    #+#             */
/*   Updated: 2022/06/01 07:57:14 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(string name)
{
	Zombie *zom;
	zom = new Zombie;
	zom->set_name(name);
	return(zom);
}
