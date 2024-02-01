/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:34:55 by icheri            #+#    #+#             */
/*   Updated: 2022/07/06 19:26:47 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my \
				7XL-double-cheese-triple-pickle-special- ketchup \
				burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon \
				costs more money. You didn’t put enough bacon in \
				my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra \
				bacon for free. I’ve been coming for \
				years whereas you started working here \
				since last month." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak \
				to the manager now." << std::endl;
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
