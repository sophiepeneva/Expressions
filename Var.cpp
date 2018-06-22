# Expressions

#include "Var.h"



Var::Var(const char* name, double vV) : valueVar(vV)
{
	setName(name);
}

Var& Var::operator=(const Var& v)
{
	if(this!=&v)
	{
		delete[] name;
		CopyFrom(v);
	}
	return *this;
}

void Var::setName(const char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Var::CopyFrom(const Var& v)
{
	setName(v.name);
	valueVar = v.valueVar;
}

Var::~Var()
{
	delete[] name;
}
