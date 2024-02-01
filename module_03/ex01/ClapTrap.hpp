/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:44:35 by icheri            #+#    #+#             */
/*   Updated: 2022/08/16 16:09:30 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	protected:
		std::string name;
		int hit_point;
		int energy_points;
		int attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & src);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap & src);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
