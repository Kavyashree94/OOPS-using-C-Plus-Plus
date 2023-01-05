//============================================================================
// Name        : Class_Example.cpp
// Author      : Herbert Schildt
// Version     :
// Copyright   : The Complete Reference C++
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stack.h"
using namespace std;

int main() {
	stack stack1,stack2;

	stack1.init();
	stack2.init();

	stack1.push(1);
	stack2.push(2);

	stack1.push(3);
	stack2.push(4);

	cout<<stack1.pop()<<" ";
	cout<<stack1.pop()<<" ";
	cout<<stack2.pop()<<" ";
	cout<<stack2.pop()<<" ";

	return 0;
}
