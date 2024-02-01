/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:34:55 by icheri            #+#    #+#             */
/*   Updated: 2022/07/06 20:09:11 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "DEBUUUG!...." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFOOO...." << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "WARNINNG...." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "ERROOR...." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i;

	std::string _level[] = {"debug", "info", "warning", "error"};
	void (Harl:: *ptr_func[]) (void) = {
		ptr_func[0] = &Harl::debug,
		ptr_func[1] = &Harl::info,
		ptr_func[2] = &Harl::warning,
		ptr_func[1] = &Harl::error
		};
	i = 0;
	while(i < 4)
	{
		if (_level[i] == level)
		{
			(this->*ptr_func[i])();
			return ;
		}
		i++;
	}
}
