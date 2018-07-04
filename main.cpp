#include "fact.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout<<"Wrong parameters count"<<std::endl;
		exit(0);
	}
	
	std::vector<Fact> facts;
	std::vector<Fact> facts_defined;
	std::vector<Fact> facts_undefined;

	std::ifstream infile(argv[1]);
	std::string line;

	while (std::getline(infile, line))
	{
		std::istringstream iss(line);
		std::string subs;
		while (iss)
		{
			iss >> subs;
			if (subs[0] == '#')
				break ;
			std::cout << "Substring: " << subs << std::endl;
			if (isupper(subs) ) //and not exist
		}
	}

	if(infile.is_open())
		infile.close();

	Fact A(1), B(1), C(0);
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl;
	A = C + B;
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl; 
	A = B + C;
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl; 
	return 0;
}