/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:25:31 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 19:35:22 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: weapon(weapon), name(name)
{}

void	HumanA::attack()
{
	std::cout
		<< name << " attacks with his "
		<< weapon.getType() << std::endl;
}
