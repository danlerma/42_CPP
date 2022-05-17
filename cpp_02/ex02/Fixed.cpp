/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:36:43 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/17 17:57:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int	Fixed::bits = 8;
//constructor
Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	this->rawBits = obj.getRawBits();
}

Fixed::Fixed(const int num)
{
	this->rawBits = num << this->bits;
}

Fixed::Fixed(const float num)
{
	this->rawBits = roundf(num * (1 << this->bits));
}

//destructor
Fixed::~Fixed()
{
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

//comparison operators
Fixed&	Fixed::operator=(const Fixed& obj)
{
	this->rawBits = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const&obj) const
{
	if (this->rawBits > obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed const&obj) const
{
	if (this->rawBits < obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed const&obj) const
{
	if (this->rawBits <= obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed const&obj) const
{
	if (this->rawBits >= obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed const&obj) const
{
	if (this->rawBits == obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed const&obj) const
{
	if (this->rawBits != obj.getRawBits())
		return true;
	else
		return false;
}
//arithmetic operators

Fixed	Fixed::operator+(Fixed const&obj) const
{
	Fixed	ret;

	ret.setRawBits(obj.getRawBits() + this->getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const&obj) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() - obj.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const&obj) const
{
	Fixed	ret(this->toFloat() * obj.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const&obj) const
{
	Fixed	ret(this->toFloat() / obj.toFloat());
	return (ret);
}

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
