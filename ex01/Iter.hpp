/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:59:37 by armitite          #+#    #+#             */
/*   Updated: 2025/04/19 17:22:17 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template < typename T >
void	iter(T *array, size_t lenght, void(*f)(T *)) {
	
	if (array == NULL || f == NULL)
		return;
	
}