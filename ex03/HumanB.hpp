/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:29:43 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 19:31:14 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	Weapon		*weapon;
	std::string	name;

public:
	HumanB(const std::string &name);
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif
