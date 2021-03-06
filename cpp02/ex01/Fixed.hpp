/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:28:53 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/18 14:02:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private :
	int	fixedPoint; // 고정소수점
	static const int	fixedPoint2; // 분수부분 비트
public :
	Fixed();
	Fixed(const Fixed &a);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();
	Fixed	&operator=(const Fixed &b); // 대입 연산자 오버로드
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &Fixed);

#endif
