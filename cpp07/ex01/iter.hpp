/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsikim <minsikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:29:20 by minsikim          #+#    #+#             */
/*   Updated: 2022/04/18 20:52:36 by minsikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *arr, const int &length, void (*fn)(const T &ele))
{
	for (int i = 0; i < length; i++) // arr[i]
	{
		fn(arr[i]);
	}
}

#endif
