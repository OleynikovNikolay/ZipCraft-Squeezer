

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

int main(int argc, char* argv[])
{
	if (argc > 2)
	{
		std::cerr << "Usage: " << argv[0] << "--command" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
