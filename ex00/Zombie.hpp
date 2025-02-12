/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:44:24 by maustel           #+#    #+#             */
/*   Updated: 2025/02/12 10:44:24 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

class Zombie
{
	private:
	std::string	_name;

	public:
	Zombie(std:: string name);
	~Zombie();
	void announce( void );	//public or private?
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
