/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:08:22 by maustel           #+#    #+#             */
/*   Updated: 2025/02/19 16:08:22 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP_HH
# define __HARL_HPP_HH

# include <iostream>
# include <string>

/*-------------------------------------------------------------------------
Exercise is about avoiding if/else and use pointer to member functions

Examples of pointers to (member) functions:
char (*fct_ptr)( int ); ptr to a function which returns char and takes int.
	• char (Harl::*fct_ptr)( int ); ptr to func member of the Harl class, which
		returns char and take int.
	• char (*fct_ptr[4])( int ); array of ptr to func.
	• char (Harl::*fct_ptr[4])( int ); array of ptr to func member of Harl.

void (Harl::*fct_ptr[4])( void ); array of ptr to func member of Harl.
	-> pointer to function that returns void and takes void
-------------------------------------------------------------------------*/
class Harl
{
	private:
	std::string level[4];
	void (Harl::*fct_ptr[4])( void );
	void init_level( void );
	void init_fct_pointer( void );
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif
