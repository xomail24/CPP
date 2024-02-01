/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:44:20 by icheri            #+#    #+#             */
/*   Updated: 2022/07/16 23:39:32 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	this->hit_point = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "Default constructor called: " << "Default" << " join the fight" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. "<< this->name << " delete" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "Constructor called: " << name << " join the fight" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = name;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & src)
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
void ClapTrap::attack(const std::string& target)
{

	if(this->hit_point > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << " causing " \
		<< this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "Energy or health points are over" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_point += amount;
	this->energy_points--;
	std::cout << this->name << " recovered " << amount << " hit points" << std::endl;
}
