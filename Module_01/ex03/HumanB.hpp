/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:49:48 by icheri            #+#    #+#             */
/*   Updated: 2022/07/03 16:23:00 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _Name;
		Weapon *_Weapon;
	public:
		HumanB(std::string Name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif
