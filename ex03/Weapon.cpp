/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:13:29 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/11 13:13:20 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
	: type(type)
{}

const std::string	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}
