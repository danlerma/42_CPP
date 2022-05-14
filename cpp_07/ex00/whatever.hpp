#ifndef WHATEVER_H

# define WHATEVER_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

template<typename T> void	swap(T& a1, T& a2)
{
	T	aux;

	aux = a1;
	a1 = a2;
	a2 = aux;
}

template <typename T> T	min(T a1, T a2)
{
	if (a2 > a1)
		return (a1);
	else if (a2 <= a1)
		return (a2);
	return (0);
}

template <typename T> T	max(T a1, T a2)
{
	if (a1 > a2)
		return (a1);
	else if (a1 <= a2)
		return (a2);
	return (0);
}

#endif
