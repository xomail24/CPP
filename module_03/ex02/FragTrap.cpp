/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:29:17 by icheri            #+#    #+#             */
/*   Updated: 2022/08/21 19:38:19 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "NoName";
	this->hit_point = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap: < " << this->name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap: < " << this->name << " > joinig The fight" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called. "<< this->name << " delete" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}

FragTrap & FragTrap::operator = (const FragTrap & src)
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

void	FragTrap::attack(string const & target )
{
	std::cout << "FragTrap: < " << this->name << " > attack " << target
		<< ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::guardGate()
{
	std::cout << "FragTrap: < " << this->name <<
		" > has enterred in Gate Kepper mode" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: < " << this->name << ">  requested for a Hight Fives" << std::endl;
}
