#include "fact.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

bool	isupper_s(std::string s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(isupper(s[i]) && isalpha(s[i])))
			return false;
		i++;
	}
	return true;
}

bool	isduplicated(std::vector<Fact> vec, std::string name)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].getName() == name)
			return true;
	}
	return false;
}


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
		std::string sym;
		while (iss)
		{
			iss >> sym;
			if (sym[0] == '#')
				break ;
			if (isupper_s(sym) && !isduplicated(facts, sym)) //isdup not working
			{
				std::cout << "symtring: " << sym << std::endl;
				facts.push_back(Fact(-1, sym));
			}
		}
	}

	if(infile.is_open())
		infile.close();

	Fact A(1, "A"), B(1, "B"), C(0, "C");
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl;
	A = C + B;
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl; 
	A = B + C;
	std::cout<< A.getValue() << B.getValue() << C.getValue() << std::endl; 
	return 0;
}