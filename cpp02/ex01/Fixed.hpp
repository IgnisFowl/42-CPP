/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:07:20 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2025/09/20 15:09:03 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed(); //default constructor
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& other); //copy constructor
		Fixed& operator = (const Fixed& other); //copy assignment operator
		~Fixed(); //destructor

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
};

#endif