/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:30:39 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 19:31:22 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: weapon(NULL), name(name)
{}

void	HumanB::attack()
{
	std::cout
		<< name << " attacks with his ";
	if (weapon == NULL)
		std::cout << "bear hands" << std::endl;
	else
		std::cout << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
