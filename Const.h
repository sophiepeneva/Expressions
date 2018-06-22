# Expressions

#pragma once
#include "Expression.h"
class Const :
	public Expression
{
public:
	Const(double vC) { valueConst = vC; }

	double value() const { return valueConst; }
	void print() const { std::cout << valueConst; }
private:
	double valueConst;
};
