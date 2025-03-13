/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:20:56 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 13:20:56 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string _name;
	Weapon*	_weapon;
	public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &weapon);
};

#endif
