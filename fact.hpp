#ifndef FACT_HPP
#define FACT_HPP
#include <string>
#include <vector>

class	Fact
{
	private:
		std::string	_name;	// caps letter(s) ? 
		int			_value; //true \ false \ undef
	public:
		Fact(void);
		Fact(int val);
		Fact(const Fact &);
		Fact	&operator=(const Fact &);
		Fact	&operator+(const Fact &);
		// Fact	&operator^(const Fact &);
		Fact	&operator!();
		~Fact(void);
		int		getValue(void);
};

#endif
