/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:19:44 by stopp             #+#    #+#             */
/*   Updated: 2025/01/17 18:49:20 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main(void)
{
	std::cout << "---- Tests from Subject" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "---- additional Tests with a span of 15000 random values" << std::endl;
	Span	span(15000);
	std::vector<int> tmp;
	std::srand(time(NULL));
	for (int i = 0; i < 15000; i++)
	{
		int random_int = rand() % 10000000;
		if (std::find(tmp.begin(), tmp.end(), random_int) == tmp.end())
			tmp.push_back(random_int);
		else
			i--;
	}
	span.addNumber(tmp.begin(), tmp.end());
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
	return 0;
}
