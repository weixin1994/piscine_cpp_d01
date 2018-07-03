#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

void my_cat(char **buff)
{
	int i = 0;
	char c;
	while (buff[++i] != NULL)
	{
		std::ifstream file(buff[i], std::ios::in);
		if(!file)
			std::cerr << "my_cat: " << buff[i] << ": No such file or directory" << std::endl;
		else
			while (file.get(c))
				std::cout << c;
	}
}

int main(int argc, char *argv[])
{
	if(argc < 2)
		std::cout << "my_cat: Usage : ./my_cat file [...]\n";
	else
		my_cat(argv);
	return 0;
}
