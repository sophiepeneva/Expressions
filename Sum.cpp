# Expressions

#include "Sum.h"



Sum::Sum(Expression* firstExp, Expression* secondExp)
{
	firstExpression = firstExp;
	secondExpression = secondExp;
}

Sum& Sum::operator=(const Sum& s)
{
	if(this!=&s)
	{
		Destroy();
		CopyFrom(s);
	}
	return *this;
}

void Sum::CopyFrom(const Sum& s)
{
	firstExpression = s.firstExpression;
	secondExpression = s.secondExpression;
}


void Sum::print() const
{
	std::cout << "(";
	firstExpression->print();
	std::cout << " + ";
	secondExpression->print();
	std::cout << ")";
}

void Sum::Destroy()
{
	delete[] firstExpression;
	delete[] secondExpression;
}
