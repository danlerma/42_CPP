/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:37:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/17 17:50:20 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

#define FIXED_H
# include <string>
# include <iostream>
# include <cmath>
# include <fstream>

using	std::cout;
using	std::endl;

class	Fixed
{
private:
	const static int	bits;
	int	rawBits;
public:
	//constructor and destructor
	Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	//comparison operators
	Fixed&	operator=(const Fixed& obj); //
	bool	operator>(Fixed const&obj) const;
	bool	operator<(Fixed const&obj) const;
	bool	operator>=(Fixed const&obj) const;
	bool	operator<=(Fixed const&obj) const;
	bool	operator==(Fixed const&obj) const;
	bool	operator!=(Fixed const&obj) const;
	//arithmetic operators
	Fixed	operator+(Fixed const&obj) const;//
	Fixed	operator-(Fixed const&obj) const;
	Fixed	operator*(Fixed const&obj) const;
	Fixed	operator/(Fixed const&obj) const;
	Fixed	&operator++(); //
	Fixed	operator++(int); //
	Fixed	&operator--(); //
	Fixed	operator--(int); //

	//getter and setter
	int	getRawBits(void) const;
	void	setRawBits (int const raw);
	//functions
	float	toFloat(void) const;
	int	toInt(void) const;
	static Fixed	min(Fixed const&num1, Fixed const&num2);
	static Fixed	max(Fixed const&num1, Fixed const&num2);
};

std::ostream	&operator<<(std::ostream &obj, const Fixed& mc);

#endif
