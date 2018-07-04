#ifndef FACT_HPP
#define FACT_HPP
#include <string>
#include <vector>

#define TRUE 1
#define FALSE 0
#define UNDEF -1

class	Fact
{
	private:
		std::string	_name;	// caps letter(s) ? 
		int			_value; //true \ false \ undef
	public:
		Fact(void);
		Fact(int val, std::string nm);
		Fact(const Fact &);
		Fact	&operator=(const Fact &);
		Fact	&operator+(const Fact &);
		//Fact	&operator^(const Fact &);
		Fact	&operator!();
		~Fact(void);
		
		int				getValue(void);
		std::string		getName(void);
};

#endif
