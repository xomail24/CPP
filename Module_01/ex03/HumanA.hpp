/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 01:48:40 by icheri            #+#    #+#             */
/*   Updated: 2022/07/03 16:16:12 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _Name;
		Weapon &_Weapon;
	public:
		HumanA(std::string Name, Weapon &Weapon);
		void attack();
};

#endif
