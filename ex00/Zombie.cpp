/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:47:55 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 10:47:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << this->_name << " rised up!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed!" << std::endl;
}

void Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
