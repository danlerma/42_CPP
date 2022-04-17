#include"utils.hpp"

static std::string	find_strings(std::string str, char *s1, char *s2)
{
	std::string	str2;
	std::string s;
	size_t	pos;

	(void)s2;
	str2 = str;
	pos = str.find(s1);
	while (pos != std::string::npos)
	{
		if (pos == 0)
		{
			str2 = s2;
			str2 += str.substr(strlen(s1), str.length() - strlen(s1));
			cout << str.length() - strlen(s1) << endl;
		}
		else
		{
			str2+=str2.substr(str2.length(), pos);
			str2 += s2;
		}
		cout << str2 << "ñ" <<endl;
		pos = str.find(s1);
		str = str.substr(pos, str.length());
		cout << "STR ORIGINAL: " << str << " POS: " << std::string::npos
			<<" STRLEN: " << str2.length()<< endl;
		std::cin >> s;
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
