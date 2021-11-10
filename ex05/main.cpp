/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:00:32 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 23:03:34 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

#define COLOR_RESET	"\033[m"
#define COLOR_CYAN	"\033[36m"

void	print_header(const std::string &str)
{
	std::cout << COLOR_CYAN << str << COLOR_RESET << std::endl;
}

int	main()
{
	const std::string	levels[] = {
		"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen	karen;

	for (unsigned i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
	{
		print_header(levels[i]);
		karen.complain(levels[i]);
	}
}
