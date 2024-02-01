/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:44:09 by icheri            #+#    #+#             */
/*   Updated: 2022/08/16 16:09:47 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");

	scaver.guardGate();
	clapper.attack("scaver");
	scaver.takeDamage(20);
	scaver.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
