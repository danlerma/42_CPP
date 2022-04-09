/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:35:52 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/08 19:52:44 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H

# define TOOL_H

# include"PhoneBook.hpp"
# include <string>
# include <iomanip>
# include <ctype.h>
# include <stdlib.h>
# include <iostream>

void	add(PhoneBook *book, int pos);
void	search(PhoneBook book, int num);

#endif
