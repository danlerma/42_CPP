/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:37:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:37:17 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H

#define FIXED_H
# include <string>
# include <iostream>
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
	//operators
	Fixed& operator=(const Fixed& obj);
	//getter and setter
	int getRawBits(void) const;
	void setRawBits (int const raw);
	//functions
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &obj, const Fixed& mc);

#endif
