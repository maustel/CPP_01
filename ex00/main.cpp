/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:43:00 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 10:43:00 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*		zombie = newZombie("Zombie_Heap");

	// zombie->newZombie("Zombie_Heap");
	zombie->announce();

	randomChump("Zombie_Stack");

	delete zombie;
	return (0);
}
