# Expressions

#pragma once
#include<iostream>

class Expression
{
public:
	Expression() {};
	virtual ~Expression() {};

	virtual double value() const = 0;
	virtual void print() const = 0;
};
