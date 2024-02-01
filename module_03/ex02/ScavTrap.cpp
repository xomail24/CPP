/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:09:52 by icheri            #+#    #+#             */
/*   Updated: 2022/08/16 16:06:41 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "NoName";
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap: < " << this->name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap: < " << this->name << " > joinig The fight" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called. "<< this->name << " delete" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->hit_point = src.hit_point;
		this->energy_points = src.energy_points;
		this->attack_damage = src.attack_damage;
	}
	return *this;
}

void	ScavTrap::attack(string const & target )
{
	std::cout << "ScavTrap: < " << this->name << " > attack " << target
		<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: < " << this->name <<
		" > has enterred in Gate Kepper mode" << std::endl;
}


