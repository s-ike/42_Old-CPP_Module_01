/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:37:07 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 23:51:39 by sikeda           ###   ########.fr       */
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
	std::cout << "I think I deserve to have some extra bacon for free.\n"
		"I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	print_header(const std::string &str)
{
	std::cout << "[ " << str << " ]" << std::endl;
}

/* ************************************************************************** */
/*   public                                                                   */
/* ************************************************************************** */

Karen::Karen(const std::string &filter)
	: _filter(filter)
{
	_levels[DEBUG] = "DEBUG";
	_levels[INFO] = "INFO";
	_levels[WARNING] = "WARNING";
	_levels[ERROR] = "ERROR";
}

void	Karen::complain( std::string level )
{
	void	(Karen:: * const fs[])(void) = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < MAX; i++)
		if (level == _levels[i])
			(this->*fs[i])();
}

void	Karen::complain_all()
{
	int	level_num = MAX;
	for (int i = 0; i < MAX; i++)
		if (_filter == _levels[i])
		{
			level_num = i;
			break;
		}

	switch (level_num)
	{
	case DEBUG:
	case INFO:
	case WARNING:
	case ERROR:
		for (int i = level_num; i < MAX; i++)
		{
			print_header(_levels[i]);
			complain(_levels[i]);
			std::cout << '\n';
		}
		break;

	default:
		print_header("Probably complaining about insignificant problems");
		break;
	}
}
