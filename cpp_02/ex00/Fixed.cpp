/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:36:43 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/20 19:36:16 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int	Fixed::bits = 0;
//constructor
Fixed::Fixed()
{
	cout << "Default constructor called." << endl;
}

Fixed::Fixed(const Fixed& obj)
{
	cout << "Copy constructor called." << endl;
	this->rawBits = obj.getRawBits();
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
	cout << "getRawBits member function called" << endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}
