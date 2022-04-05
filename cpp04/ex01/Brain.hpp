/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:09:19 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/05 19:35:38 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include "Animal.hpp"

class Brain : public Animal
{
private:
	std::string	ideas[100];
	int			i;

public:
	Brain();
	Brain(const Brain &brain);
	~Brain();
	void	print_ideas(void) const;
	void	add_ideas(std::string idea);
	Brain	&operator=(const Brain &brain);
};

#endif