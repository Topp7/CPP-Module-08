/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:17:27 by stopp             #+#    #+#             */
/*   Updated: 2025/01/16 18:35:34 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int	main(void)
{
	std::cout << "--- Test vector Container" << std::endl;
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		std::cout << *easyfind(vec, 5) <<std::endl;
		std::cout << *easyfind(vec, 11) <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "--- Test list Container" << std::endl;
	std::list<int> list;

	for (int i = 0; i < 100.0f; i++)
		list.push_back(i);
	try
	{
		std::cout << *easyfind(list, 5) <<std::endl;
		std::cout << *easyfind(list, 11) <<std::endl;
		std::cout << *easyfind(list, 101) <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
