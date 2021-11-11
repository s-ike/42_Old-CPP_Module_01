/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:03:30 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/11 13:21:57 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "def_color.h"

std::string	ft_replace(
	std::string line,
	const std::string &find,
	const std::string &newstr)
{
	const size_t	find_len = find.size();

	if (find_len == 0)
		return line;
	if (find == newstr)
		return line;

	size_t	pos;
	while ((pos = line.find(find)) != std::string::npos)
	{
		line.erase(pos, find_len);
		line.insert(pos, newstr);
	}
	return line;
}

int	main(int argc, char **argv)
{
	enum	e_args {
		FILE_NAME = 1,
		STR1,
		STR2,
		NUM_OF_ARGS
	};

	if (argc != NUM_OF_ARGS)
	{
		std::cout << COLOR_B_RED "Invalid argument" COLOR_RESET << std::endl;
		std::exit(EXIT_FAILURE);
	}

	try
	{
		std::ifstream	ifs(argv[FILE_NAME]);

		if (!ifs)
		{
			std::cout << COLOR_B_RED "Could not open the file" COLOR_RESET << std::endl;
			std::exit(EXIT_FAILURE);
		}

		std::ofstream	ofs(static_cast<std::string>(argv[FILE_NAME]) + ".replace");

		if (!ofs)
		{
			std::cout << COLOR_B_RED "Could not open the replace file" COLOR_RESET << std::endl;
			std::exit(EXIT_FAILURE);
		}

		std::string	line;

		while (std::getline(ifs, line))
			ofs << ft_replace(line, argv[STR1], argv[STR2]) << std::endl;
		}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
