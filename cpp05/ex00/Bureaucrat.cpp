/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:57:51 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/12 16:47:33 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default name"), grade(150)
{

}
	
Bureaucrat::Bureaucrat(const Bureaucrat &origin) : name(origin.getName()), grade(origin.getGrade())
{
	*this = origin;
}

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_), grade(grade_)
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &)
{
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void		Bureaucrat::incrementGrade(int amount)
{
	if (grade - amount < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade -= amount;
}

void		Bureaucrat::decrementGrade(int amount)
{
	if (grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade is too high";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade is too low";
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bu)
{
	out << bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
	return (out);
}
