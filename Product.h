# Expressions

#pragma once
#include "Expression.h"
#include "Const.h"
class Product :
	public Expression
{
public:
	Product(Expression* firstExp = new Const(0), Expression* secondExp = new Const(0));
	~Product() { Destroy(); }
	Product(const Product& p) { CopyFrom(p); }
	Product& operator=(const Product& p);

	void setFirstExpression(Expression* firstExp) { firstExpression = firstExp; }
	void setSecondExpression(Expression* secondExp) { secondExpression = secondExp; }

	double value() const { return (firstExpression->value() * secondExpression->value()); };
	void print() const;
private:
	void CopyFrom(const Product& p);
	void Destroy();

	Expression* firstExpression;
	Expression* secondExpression;
};

