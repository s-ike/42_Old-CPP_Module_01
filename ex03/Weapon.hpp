/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:13:23 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 17:13:23 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	std::string	type;

public:
	Weapon(const std::string &type = "");
	~Weapon();

	std::string	getType() const;
	void		setType(const std::string &type);
};

#endif
