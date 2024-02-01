/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:03:04 by icheri            #+#    #+#             */
/*   Updated: 2022/07/10 23:06:14 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value_fixed_point = 0;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value_fixed_point = value << this->_bit;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value_fixed_point = (int)(roundf(value * (1 << this->_bit)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value_fixed_point = other.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value_fixed_point = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->value_fixed_point = raw;
}
float Fixed::toFloat(void) const
{
	return((float)(this->value_fixed_point) / (1 << this->_bit));
}
int Fixed::toInt( void ) const
{
	return((int)(this->value_fixed_point >> this->_bit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &i)
{
	out << i.toFloat();
	return (out);
}
