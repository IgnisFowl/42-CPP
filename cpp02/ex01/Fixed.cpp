/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:17 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 16:13:02 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits; 
	/*bitwise left shift operator
	Bit shifting left by 8 is the same as multiplying n by 
	2 by 8 (256)*/
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    _value = static_cast<int>(roundf(f * (1 << _fractionalBits)));
	/*This converts a floating-point number f into a fixed-point integer representation by:
Scaling f by 2 elevated to fractionalBits (256) to move the decimal into the integer part.
Rounding to the nearest integer to keep precision.
Casting to integer for internal storage.*/
}

Fixed::Fixed(const Fixed& other) : _value(other._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) { //Assignment operator checks this != &other for self-assignment safety.
		_value = other._value;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	_value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}