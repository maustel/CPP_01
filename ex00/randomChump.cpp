/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:46:37 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 11:46:37 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-------------------------------------------------------------------------
It creates a zombie, names it, and the zombie announces itself.
-------------------------------------------------------------------------*/
void randomChump(std::string name)
{
	Zombie newZ = Zombie(name);
	newZ.announce();
}
