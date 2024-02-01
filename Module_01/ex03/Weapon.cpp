/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:44:48 by icheri            #+#    #+#             */
/*   Updated: 2022/07/03 15:43:14 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string const &Weapon::getType()
{
	return(this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
