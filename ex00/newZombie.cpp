/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:54:54 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 10:54:54 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-------------------------------------------------------------------------
It creates a zombie, names it, and returns it so you can use it outside of the
function scope
-------------------------------------------------------------------------*/
Zombie *newZombie(std::string name)
{
	Zombie *newZ = new Zombie(name);
	return (newZ);
}


