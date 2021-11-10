/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:55:57 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 15:10:10 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1("stack zombie");
	zombie1.announce();

	Zombie	*zombie2 = newZombie("heap zombie");
	zombie2->announce();
	delete zombie2;

	randomChump("randomChump zombie");
#ifdef LEAKS
	system("leaks a.out");
#endif
}
