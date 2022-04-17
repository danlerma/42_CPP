#include"utils.hpp"

static std::string	find_strings(std::string str, char *s1, char *s2)
{
	std::string	str2;
	size_t	pos;
	std::string s;

	pos = str.find(s1);
	str2 = str;
	while (pos != std::string::npos)
	{
		if (pos == 0)
		{
			str2 = s2;
			str2 += str.substr(strlen(s1), str.length() - strlen(s1));
		}
		else
		{
			str2 = str.substr(0, pos);
			str2 += s2;
			str2 += str.substr(str.substr(0, pos).length() + strlen(s1), str.length());
		}
		str = str2;
		pos = str.find(s1);
	}
	return(str2);
}

void	read_file(char **argv)
{
	std::ifstream	in(argv[1]);
	std::string	r = ".replace";
	std::ofstream	out(argv[1] + r);
	std::string	str;
	std::string	str2;

	while (!in.eof())
	{
		getline(in, str);
		str2 = find_strings(str, argv[2], argv[3]);
		out << str2 << endl;
	}
	in.close();
	out.close();
}

int	check_errors(char **argv)
{
	std::ifstream	in;
	int	i;

	for (i = 0; argv[i]; i++)
	{
		if (strlen(argv[i]) == 0)
		{
			cout << "Empty argument." << endl;
			return (1);
		}
	}
	in.open(argv[1]);
	if (!in.good())
	{
		cout << "Error opening file." << endl;;
		return (1);
	}
	in.close();
	return (0);
}
