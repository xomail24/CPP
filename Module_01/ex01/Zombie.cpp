/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:17:18 by icheri            #+#    #+#             */
/*   Updated: 2022/06/01 09:44:25 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	cout << "The zombie : " << this->name << " got into the destructor" << endl;
}
void Zombie::announce()
{
	cout << this->name <<" : BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::set_name(string name)
{
	this->name = name;
}

string Zombie::get_name()
{
	return(this->name);
}
