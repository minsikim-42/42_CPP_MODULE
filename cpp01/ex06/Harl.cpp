/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:22:58 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 15:58:52 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fn_list[4])(void) = {(&Harl::debug), (&Harl::info), \
			(&Harl::warning), (&Harl::error)};
	// void	(Harl::*fn)(void) = &Harl::debug;
	// int *i = &(int);

	std::string	arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i_case = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == arr[i])
			i_case = i;
	}

	switch (i_case)
	{
	case (0):
		(this->*fn_list[0])();
		break;
	case (1):
		(this->*fn_list[1])();
		break;
	case (2):
		(this->*fn_list[2])();
		break;
	case (3):
		(this->*fn_list[3])();
		break;
	default:
		std::cout << "Wrong Input\n";
		break;
	}	
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: What a wonderful restaurant! i love stake medium\n";
}

void	Harl::info(void)
{
	std::cout << "INFO: What the... it doesn't looks medium, please call the cheif!!\n";
}

void	Harl::warning(void)
{
	std::cout << "WARNNING: I think if he was great chef, this terrible situation shouldn't have happened\n";
}

void	Harl::error(void)
{
	std::cout << "ERROR: no..no.. look at this. this stake is so fresh that it can run arround!!\n\n";
}
