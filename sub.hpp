#ifndef _SUB_HPP_
#define _SUB_HPP_
#include "base.hpp"

class Sub: public Base
{
        private:
                Base *left;
                Base *right;
        public:
                Sub(Base* left, Base *right)
                {
                        this->left = left;
                        this->right = right;
                }

                double evaluate()
                {
                        return left->evaluate()-right->evaluate();
                }

                std::string stringify()
                {
                        return "(" + left->stringify() + " - " + right->stringify()+ ")";
                }
};
#endif

