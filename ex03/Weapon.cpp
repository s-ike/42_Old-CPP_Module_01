/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:13:29 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 17:13:37 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
	: type(type)
{}

Weapon::~Weapon()
{}

std::string	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}
