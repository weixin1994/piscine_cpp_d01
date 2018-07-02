#include <iostream>
#include <fstream>

void mycat(int nb, char **args)
{
	std::ifstream myStream;
	int i = 0;
	std::string buff;

	while(nb--)
    {
		myStream.open(args[i]);
		if(myStream)
		{
			while(getline(myStream, buff, '\0'))
				std::cout << buff << std::endl;
			myStream.close();
		}
		else
			std::cerr << "my_cat: " << args[i] << ": No such file or directory" << std::endl;
		i++;
    }
}

int	main(int argc, char *argv[])
{
  if (argc < 2)
    std::cout << "my_cat: Usage : ./my_cat file [...]" << std::endl;
  else
    mycat(argc - 1, &(*(argv + 1)));
}

