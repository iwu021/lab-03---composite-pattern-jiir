#ifndef _DIV_HPP_
#define _DIF_HPP_

#include "base.hpp"

class Div : public Base
{
        private:
                Base *left;
                Base *right;
        public:
                Div(Base *left, Base *right)
                {this->left = left; this->right = right;}

                virtual double evaluate()
                {
                        return left->evaluate()/right->evaluate();
                }

                virtual std::string stringify()
                {
                        return"(" +  left->stringify() + " / " + right->stringify()+ ")";
                }
};

#endif

