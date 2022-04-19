/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:57:03 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 13:37:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H

# define KAREN_H

# include <string.h>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class	Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	//constructor
	Karen();
	//destructor
	~Karen();
	//functions
	void	complain(std::string level);
	typedef void	(Karen::*someFuncions)();
};

#endif
