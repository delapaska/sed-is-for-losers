#include <iostream>
#include <fstream>
#include <cstdlib>
int main()
{
	std::string filename, s1, s2;
	std::cout << "Enter the filename: ";
	std::cin >> filename;
	filename = filename + ".replace";
	std::ofstream file;
	file.open(filename);
	s1 = "First string";
	s2 = "Second string";
	file << s1 << std::endl << s2;
	file.close();
}

