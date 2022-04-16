#include"utils.hpp"

void	read_file(char **argv)
{
	std::ifstream	in(argv[1]);
	std::string	r = ".replace";
	std::ofstream	out(argv[1] + r);
	std::string	str;
	size_t	pos;
	std::string	str2;

	while (!in.eof())
	{
		getline(in, str);
		pos = str.find(argv[2]);
		if (pos != std::string::npos)
		{
			str2=str.substr(0, pos);
			cout << str.find(argv[2]) << " " << std::string::npos 
			<< " "<< str
			<< " "<< str2 << endl;
		}
		out << str << endl;
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
