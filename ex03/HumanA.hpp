/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:17:21 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 13:17:21 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string _name;
	Weapon&	_weapon;
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;
};

#endif
