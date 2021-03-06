/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:55:57 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/11 12:59:19 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	const int	num = 5;
	Zombie		*zombies = zombieHorde(num, "array zombie");

	for (int i = 0; i < num; i++)
		zombies[i].announce();

	delete[] zombies;

#ifdef LEAKS
	system("leaks a.out");
#endif
}
