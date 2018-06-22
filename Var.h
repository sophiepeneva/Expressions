# Expressions

#pragma once
#include "Expression.h"
class Var :
	public Expression
{
public:
	Var(const char* name = "No name", double valueVar = 0);
	Var(const Var& v) { CopyFrom(v); }
	Var& operator=(const Var& v);
	~Var();

	void setName(const char* name);
	char* getName() const { return name; }
	void setValue(double vV) { valueVar = vV; }

	double value() const { return valueVar; }
	void print() const { std::cout << name; }
private:
	void CopyFrom(const Var& v);

	char* name;
	double valueVar;
};
