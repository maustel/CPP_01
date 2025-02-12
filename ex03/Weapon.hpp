/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:02:26 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 13:02:26 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon
{
	private:
	std::string _type;

	public:
	Weapon();
	~Weapon();
	std::string&	getType() const;
	void			setType(std::string type);
};

#endif
