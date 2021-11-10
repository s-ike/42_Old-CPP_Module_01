/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikeda <sikeda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:36:23 by sikeda            #+#    #+#             */
/*   Updated: 2021/11/10 22:45:10 by sikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen
{
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	void	complain( std::string level );
};

#endif
