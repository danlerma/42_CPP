/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:20:04 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/04/19 15:49:07 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
		cout << "Invalid arguments" << endl;
	else if (check_errors(argv) == 0)
		read_file(argv);
	return (0);
}
