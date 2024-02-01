/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:02:34 by icheri            #+#    #+#             */
/*   Updated: 2022/07/11 21:52:36 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int value_fixed_point;
		static const int _bit = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed operator ++ ( int );
		Fixed operator -- ( int );
		Fixed & operator ++ ( void );
		Fixed & operator -- ( void );

		Fixed operator + (const Fixed & input) const;
		Fixed operator - (const Fixed & input) const;
		Fixed operator * (const Fixed & input) const;
		Fixed operator / (const Fixed & input) const;


		bool operator > (const Fixed & input) const;
		bool operator < (const Fixed & input) const;
		bool operator >= (const Fixed & input) const;
		bool operator <= (const Fixed & input) const;
		bool operator == (const Fixed & input) const;
		bool operator != (const Fixed & input) const;

		static Fixed &min ( Fixed & first, Fixed &second);
		const static Fixed &min ( const Fixed & first, const Fixed &second);
		static Fixed &max ( Fixed & first, Fixed &second);
		const static Fixed &max ( const Fixed & first, const Fixed &second);

		Fixed & operator = (const Fixed & other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &i);

#endif
