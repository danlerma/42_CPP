/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:36:43 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/09 14:32:09 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int	Fixed::bits = 8;
//constructor
Fixed::Fixed()
{
	cout << "Default constructor called." << endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	cout << "Copy constructor called." << endl;
	this->rawBits = obj.getRawBits();
}

Fixed::Fixed(const int num)
{
	cout << "Int constructor called." << endl;
	this->rawBits = num << this->bits;
}

Fixed::Fixed(const float num)
{
	cout << "Float constructor called" << endl;
	this->rawBits = roundf(num * (1 << this->bits));
}

//destructor
Fixed::~Fixed()
{
	cout << "Destructor called." << endl;
}

//operator
Fixed&	Fixed::operator=(const Fixed& obj)
{
	cout << "Assignation operator called." << endl;
	this->rawBits = obj.getRawBits();
	return (*this);
}

//getter and setter
int	Fixed::getRawBits() const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

//arithmetic operators
Fixed	Fixed::operator++(int)
{
	Fixed	p(*this);

	p.rawBits += 1;
	return (p);
}

Fixed&	Fixed::operator++()
{
	this->rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	p(*this);

	p.rawBits -= 1;
	return (p);
}

Fixed&	Fixed::operator--()
{
	this->rawBits -= 1;
	return (*this);
}

//functions
float Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->rawBits >> Fixed::bits);
}


Fixed	Fixed::min(Fixed const&num1, Fixed const&num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num2);
	return (num1);
}

Fixed	Fixed::max(Fixed const&num1, Fixed const&num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}

std::ostream &operator<<(std::ostream &obj, const Fixed& mc)
{
	obj << mc.toFloat();
	return obj;
}
