/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:19:20 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 23:19:21 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	std::string	filter = "";
	if (1 < argc)
		filter = argv[1];

	Karen	karen(filter);
	karen.complain_all();
}
