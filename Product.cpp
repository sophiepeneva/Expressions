# Expressions

#include "Product.h"



Product::Product(Expression* firstExp, Expression* secondExp)
{
	firstExpression = firstExp;
	secondExpression = secondExp;
}

Product& Product::operator=(const Product& p)
{
	if(this!=&p)
	{
		Destroy();
		CopyFrom(p);
	}
	return *this;
}

void Product::print() const
{
	std::cout << "(";
	firstExpression->print();
	std::cout << " * ";
	secondExpression->print();
	std::cout << ")";
}

void Product::CopyFrom(const Product& p)
{
	firstExpression = p.firstExpression;
	secondExpression = p.secondExpression;
}

void Product::Destroy()
{
	delete[] firstExpression;
	delete[] secondExpression;
}
