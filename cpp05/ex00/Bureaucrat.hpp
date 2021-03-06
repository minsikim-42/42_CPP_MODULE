/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:39:41 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/07 13:48:30 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &origin);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &); // why?

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		incrementGrade(int amount);
	void		decrementGrade(int amount);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bu);

#endif