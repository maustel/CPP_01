/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:08:18 by maustel           #+#    #+#             */
/*   Updated: 2025/02/19 16:08:18 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	init_level();
	init_fct_pointer();
}

Harl::~Harl()
{}

void Harl::init_level()
{
	this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
}

void Harl::init_fct_pointer()
{
	this->fct_ptr[0] = &Harl::debug;
	this->fct_ptr[1] = &Harl::info;
	this->fct_ptr[2] = &Harl::warning;
	this->fct_ptr[3] = &Harl::error;
}

/*-------------------------------------------------------------------------
check which level number is the passed level.
then execute the corresponding member function, using a pointer to that function
-------------------------------------------------------------------------*/
void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; ++i)
	{
		if (level == this->level[i])
			(this->*fct_ptr[i])();
	}
}

void Harl::debug()
{
	std::cout << "Debug message." << std::endl;
}

void Harl::info()
{
	std::cout << "Info message." << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning message." << std::endl;
}

void Harl::error()
{
	std::cout << "Error message." << std::endl;
}
