/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:29:33 by icheri            #+#    #+#             */
/*   Updated: 2022/08/18 17:58:19 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
	FragTrap();
	FragTrap(string name);
	FragTrap(const FragTrap & other);
	~FragTrap();
	FragTrap & operator = (const FragTrap & src);
	void attack(const std::string& target);
	void guardGate();
	void highFivesGuys(void);
};

#endif
