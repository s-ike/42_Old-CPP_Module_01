/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:46:21 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/11 11:48:00 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	std::string	name;

public:
	Zombie(const std::string &name);
	~Zombie();

	void	announce( void ) const;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
