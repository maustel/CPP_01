/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:19:22 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 14:19:22 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*-------------------------------------------------------------------------
----------------- *** DONT CHANGE MAIN!!! *** -------------
the content of main is given in the subject and should not be changed.
Both scenarios should output the following at execution:
Bob/Jim attacks with their crude spiked club
Bob/Jim attacks with their some other type of club

The exercise is about using pointer / reference in the right and recentful way
-------------------------------------------------------------------------*/
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
