/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:37:07 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 22:59:44 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

/* ************************************************************************** */
/*   private                                                                  */
/* ************************************************************************** */

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/* ************************************************************************** */
/*   public                                                                   */
/* ************************************************************************** */

void	Karen::complain( std::string level )
{
	void	(Karen:: * const fs[])(void) = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	const std::string	levels[] = {
		"DEBUG", "INFO", "WARNING", "ERROR"};

	for (unsigned i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
		if (level == levels[i])
			(this->*fs[i])();
}