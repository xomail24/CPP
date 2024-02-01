/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:44:09 by icheri            #+#    #+#             */
/*   Updated: 2022/07/18 02:08:47 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Halk("Halk");
	ClapTrap Tanos("Tanos");

	Tanos.attack("Halk");
	Halk.takeDamage(0);
	Halk.beRepaired(10);
	Halk.attack("Tanos");
	Tanos.takeDamage(0);
	return (0);
}
