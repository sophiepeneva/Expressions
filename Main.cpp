# Expressions

#include "Sum.h"
#include "Product.h"
#include "Var.h"
#include<iostream>

using namespace std;

int main()
{
	Expression* expV = new Var("2*2", 4);
	Expression* expC = new Const(5);
	
	Expression* expS = new Sum(expV, expC);
	Product p(expV, expS);
	p.print();
	cout << endl;
	cout << p.value() << endl;

	system("pause");
}
