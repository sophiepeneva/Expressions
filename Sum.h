# Expressions

#pragma once
#include "Expression.h"
#include "Const.h"
class Sum :
	public Expression
{
public:
	Sum(Expression* firstExp = new Const(0), Expression* secondExp = new Const(0));
	~Sum() { Destroy(); }
	Sum(const Sum& s) { CopyFrom(s); }
	Sum& operator=(const Sum& s);

	double value() const { return (firstExpression->value() + secondExpression->value()); };
	void print() const;
private:
	void CopyFrom(const Sum& s);
	void Destroy();
	Expression* firstExpression;
	Expression* secondExpression;
};
