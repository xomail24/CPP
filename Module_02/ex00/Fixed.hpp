/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:02:34 by icheri            #+#    #+#             */
/*   Updated: 2022/07/10 14:59:57 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int value_fixed_point;
		static const int _bit = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed & operator = (const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();

};

#endif
