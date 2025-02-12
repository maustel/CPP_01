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
	Zombie();
	~Zombie();
	void announce( void );
	void init(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
