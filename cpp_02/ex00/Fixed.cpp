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

Fixed::Fixed(/* args */)
{
}

Fixed::Fixed(int num)
{
	this->num = num;
	cout << "COMSRUCTOR NORML " << this->num << endl;
}

Fixed::Fixed(const Fixed& obj)
{
	this->num = obj.num;
	cout << "COPPIA RARA " << this->num << endl;
}

Fixed::~Fixed()
{
}
void Fixed::setNum(int n)
{
	cout << "cambiar el num " << this->num << endl;
	this->num = n;
	cout << "ahora ->" << this->num << endl;

}