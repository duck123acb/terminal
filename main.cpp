#include <iostream>
#include <stdlib.h>

int main()
{
	while (true)
	{
		std::string command;
		std::cout << "What do you want to run?  ";
		std::getline(std::cin, command);
		system(command.c_str());
	}

	return 0;
}