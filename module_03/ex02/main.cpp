/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:44:09 by icheri            #+#    #+#             */
/*   Updated: 2022/08/17 19:40:34 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");
	FragTrap fragger("fragger");

	scaver.guardGate();
	fragger.highFivesGuys();
	clapper.attack("fragger");
	fragger.takeDamage(20);
	fragger.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
