/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:26:40 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/16 16:32:51 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string Type)
{
	this->Type_ = Type;
}

std::string	Weapon::getType(void)
{
	return (Type_);
}

void	Weapon::setType(std::string Type)
{
	Type_ = Type;
}
