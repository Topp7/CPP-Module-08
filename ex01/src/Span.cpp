/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:49:02 by stopp             #+#    #+#             */
/*   Updated: 2025/01/17 18:35:40 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span() : _N(0)
{
}
Span::Span(unsigned int N) : _N(N)
{
}
Span::Span(const Span &copy)
{
	*this = copy;
}
Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_N = copy._N;
		_values = copy._values;
	}
	return *this;
}
Span::~Span()
{
}
void	Span::addNumber(int new_N)
{
	if (_values.size() == _N)
		throw FullContainerException();
	_values.push_back(new_N);
}
void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_values.size() + std::distance(begin, end) > _N)
		throw FullContainerException();
	_values.insert(_values.end(), begin, end);
}

int	Span::shortestSpan()
{
	if (_values.size() < 2)
		throw NoNumbersException();
	std::vector<int> tmp = _values;
	std::sort(tmp.begin(), tmp.end());
	int min	= tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int	Span::longestSpan()
{
	if (_values.size() < 2)
		throw NoNumbersException();
	std::vector<int> tmp = _values;
	std::sort(tmp.begin(), tmp.end());
	return(tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::FullContainerException::what() const throw()
{
	return ("Container already full!");
}
const char *Span::NoNumbersException::what() const throw()
{
	return ("Not enough Numbers in Container!");
}
