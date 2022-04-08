/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:13:07 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/08 15:37:34 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iosteam>


class Form{
private:
	const std::string	name;
	bool	is_signed;
	const int	sign_grade;
	const int	execute_grade;

public:
	Form();
	Form(const Form &origin);
	~Form();
	Form	&operator=(const Form &origin);
	Form::GradeTooHighException
}