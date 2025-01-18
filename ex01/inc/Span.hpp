/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:37:35 by stopp             #+#    #+#             */
/*   Updated: 2025/01/17 18:38:08 by stopp            ###   ########.fr       */
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

class	Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_values;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &copy);
		~Span();

		void	addNumber(int new_N);
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	class FullContainerException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NoNumbersException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
