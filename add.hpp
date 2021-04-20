#ifndef _ADD_HPP_
#define _ADD_HPP_

#include "base.hpp"

class Add: public Base 
{
	private:
		Base *left;
		Base *right;
	public:
		Add(Base* left, Base*right)
		{
			this->left = left;
			this->right = right;
		}
		double evaluate() 
		{
			return left->evaluate() + right->evaluate();
		}
		std::string stringify() 
		{
			return "(" +  left->stringify() + " + " + right->stringify() + ")";
		}
};
#endif
