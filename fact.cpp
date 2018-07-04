#include "fact.hpp"

Fact::Fact(void) : _value(-1) {}

Fact::Fact(int val) : _value(val) {}

Fact::~Fact(void) {}

Fact::Fact(Fact const& copy){
	*this = copy;
}

Fact &	Fact::operator=( Fact const &rhs){
	if (this != &rhs){
		this->_value = rhs._value;
	}
	return *this;
}

Fact &	Fact::operator+( Fact const &rhs){
	if (this == &rhs){
		if (this->_value == -1 || rhs._value ==1)
			this->_value = -1;
		else if (this->_value && rhs._value)
			this->_value = 1;
		else 
			this->_value = 0;
	}
	return *this;
}

Fact &	Fact::operator!(){
		if (this->_value == 1)
			this->_value = 0;
		else  if (this->_value == 0)
			this->_value = 0;
		else
			this->_value = -1;
	return *this;
}

int		Fact::getValue(){
	return this->_value;
}