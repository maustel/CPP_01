/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:17:40 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 14:17:40 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*-------------------------------------------------------------------------
Weapon of humanB has to be a pointer, because it is not set from the beginning
So at init, it will point to NULL
-------------------------------------------------------------------------*/
HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

/*-------------------------------------------------------------------------
*weapon of humanB should point to Weapon club
function takes weapon as reference, to not make a copy, but a reference to
the original weapon from main.
-------------------------------------------------------------------------*/
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
