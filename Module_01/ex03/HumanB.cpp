/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:49:38 by icheri            #+#    #+#             */
/*   Updated: 2022/07/03 16:44:46 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name):_Name(Name){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_Name << " attacks with their " << _Weapon->getType() << std::endl;
}
