/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:48:20 by stopp             #+#    #+#             */
/*   Updated: 2025/01/18 15:37:09 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "--- Subject Tests with my iterator for std::stack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << "\n" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(0);

	std::deque<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "--- Test with std::list Container for reference" << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "Top: " << list.back() << std::endl;

	list.pop_back();

	std::cout << "Size: " << list.size() << "\n" << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(42);
	list.push_back(0);

	std::list<int>::iterator it2 = list.begin();
	std::list<int>::iterator ite2 = list.end();

	++it2;
	--it2;

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::cout << "--- Test with std::string data" << std::endl;
	MutantStack<std::string> str_stack;
	str_stack.push("test");
	str_stack.push("42");

	std::cout << "Top: " << str_stack.top() << std::endl;

	str_stack.pop();
	str_stack.pop();

	std::cout << "Size: " << str_stack.size() << "\n" << std::endl;

	str_stack.push("Hello Mr/Mrs");
	str_stack.push("Evaluator, ");
	str_stack.push("how ");
	str_stack.push("are ");
	str_stack.push("you?");

	std::deque<std::string>::iterator it3 = str_stack.begin();
	MutantStack<std::string>::iterator ite3 = str_stack.end();

	++it3;
	--it3;

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

	return 0;
}
