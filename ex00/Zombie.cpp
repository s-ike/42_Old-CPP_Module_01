/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:49:09 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 15:09:14 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#define COLOR_RESET	"\033[m"
#define COLOR_CYAN	"\033[36m"

Zombie::Zombie(const std::string &name)
	: name(name)
{}

Zombie::~Zombie()
{
	std::cout
		<< COLOR_CYAN << name
		<< " is destroyed." COLOR_RESET << std::endl;
}

void	Zombie::announce() const
{
	std::cout << name
		<< " BraiiiiiiinnnzzzZ..." << std::endl;
}
