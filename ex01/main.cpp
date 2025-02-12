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

/*-------------------------------------------------------------------------
Zombie_Heap exists until delete
Zombie_Stack only exists during function random Chump
-------------------------------------------------------------------------*/
int main()
{
	int	nbr_zombies = 10;
	Zombie*		zombies = zombieHorde(nbr_zombies, "Horst");
	int i = 0;

	while (i < nbr_zombies)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}
