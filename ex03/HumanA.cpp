/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:21:55 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 13:21:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*-------------------------------------------------------------------------
Constructor takes reference to the Weapon club from the main
-> doesnt make a copy of the object, but refers to the "real" weapon from main
-------------------------------------------------------------------------*/
HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
