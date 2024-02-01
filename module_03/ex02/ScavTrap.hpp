/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:10:06 by icheri            #+#    #+#             */
/*   Updated: 2022/08/17 19:43:02 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(string name);
	ScavTrap(const ScavTrap & other);
	~ScavTrap();
	ScavTrap & operator = (const ScavTrap & src);
	void attack(const std::string& target);
	void guardGate();
};

#endif
