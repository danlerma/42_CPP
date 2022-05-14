#ifndef ITER_H

# define ITER_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

template<typename T> void	iter(T* a, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
	{
		a[i] = f(a[i]);
	}
}

#endif
