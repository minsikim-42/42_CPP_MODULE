/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:16:08 by minsikim          #+#    #+#             */
/*   Updated: 2022/03/23 12:17:49 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	// ScavTrap* John = new ScavTrap("John");
	ScavTrap	John("John");
	ScavTrap	Tom("Tom");
	ScavTrap	cp = Tom;

	John.attack(Tom.get_name());
	cp.takeDamage(3);
	Tom.beRepaired(3);
	std::cout << cp.get_hit() << Tom.get_hit() << std::endl;
	Tom.guardGate();
	// delete John;
	return (0);
}