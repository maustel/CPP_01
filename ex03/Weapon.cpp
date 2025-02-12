/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:08:05 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 13:08:05 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}
/*-------------------------------------------------------------------------
member function that returns a const reference to type.
-------------------------------------------------------------------------*/
std::string &Weapon::getType() const
{
	return (this->_type);
}

/*-------------------------------------------------------------------------
member function that sets type using the new one passed as parameter.
-------------------------------------------------------------------------*/
void Weapon::setType(std::string type)
{
	this->_type = type;
}
