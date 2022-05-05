/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:36:43 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:46:24 by dlerma-c         ###   ########.fr       */
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
	this->rawBits = num;
}

Fixed::Fixed(const float num)
{
	cout << "Float constructor called" << endl;
	this->rawBits = (int)num;
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

//functons
float Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return ((int) this->rawBits);
}

std::ostream &operator<<(std::ostream &obj, const Fixed& mc) {
	obj << mc.toFloat();
	return obj;
}
