/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:39:05 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 12:39:05 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* pstr = &str;
	std::string& rstr = str;

	std::cout << "memory address of string variable: " << &str << std::endl;
	std::cout << "memory address held by stringPTR:  " << pstr << std::endl;
	std::cout << "memory address held by stringREF:  " << &rstr << std::endl;

	std::cout << "value of the string variable:  " << str << std::endl;
	std::cout << "value pointed to by stringPTR: " << *pstr << std::endl;
	std::cout << "value pointed to by stringREF: " << rstr << std::endl;

	return (0);
}
