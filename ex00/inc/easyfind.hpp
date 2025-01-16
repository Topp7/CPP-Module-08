/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:07:59 by stopp             #+#    #+#             */
/*   Updated: 2025/01/16 18:18:42 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <stdexcept>
#include <iterator>

template <typename T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator ret;

	ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw std::runtime_error("Not found!");
	return ret;
}
