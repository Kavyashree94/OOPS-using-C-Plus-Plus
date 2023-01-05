/*
 * stack.cpp
 *
 *  Created on: 26-Dec-2022
 *      Author: Kavyashree
 */

#include "stack.h"
#include <iostream>
using namespace std;
void stack::init()
{
	tos=0;
}

void stack::push(int i)
{
	if(tos==SIZE)
	{
		cout<<"Stack is full\n";
		return;
	}
	stck[tos]=i;
	tos++;
}

int stack::pop()
{
  if(tos==0)
  {
	  cout<<"Stack underflow\n";
	  return 0;
   }
  tos--;
  return stck[tos];
}

