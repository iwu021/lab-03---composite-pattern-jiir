#ifndef __RAND_HPP__ 
#define __RAND_HPP__

#include "base.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

class rand : public Base {
    private:
	double num;
	std::string str;
    public:
	rand() : Base () {
	num = rand() % 100;
	str = std::to_string(num);
	str.erase(str.find_last_not_of('0') + 1, std::string::npos);
	str.erase(str.find_last_not_of('.') + 1, std::string::npos);
	virtual double evaluate() { return num; }
	virtual std::string stringify() { return str; }
};

#endif
