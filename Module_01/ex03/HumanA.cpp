/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:48:31 by icheri            #+#    #+#             */
/*   Updated: 2022/07/03 16:44:18 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon): _Name(Name), _Weapon(Weapon) {}

void HumanA::attack()
{
	std::cout << this->_Name << " attacks with their " << _Weapon.getType() << std::endl;
}
