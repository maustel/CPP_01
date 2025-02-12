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

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::~Weapon()
{}
/*-------------------------------------------------------------------------
member function that returns a const reference to type.
I dont have to do something like this:
// const std::string& Ref = this->_type;
// return (Ref);
because the return type of the function is declared as reference&, so it will return
automaticalle the reference to this->type
-------------------------------------------------------------------------*/
const std::string&	Weapon::getType() const
{
	return (this->_type);
}

/*-------------------------------------------------------------------------
member function that sets type using the new one passed as parameter.
-------------------------------------------------------------------------*/
void Weapon::setType(const std::string new_type)
{
	this->_type = new_type;
}
