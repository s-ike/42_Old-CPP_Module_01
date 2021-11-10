/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:36:23 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 23:47:17 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen
{
	enum		{DEBUG, INFO, WARNING, ERROR, MAX};
	std::string	_filter;
	std::string	_levels[MAX];
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

public:
	Karen(const std::string &filter = "");
	void	complain( std::string level );
	void	complain_all();
};

#endif
