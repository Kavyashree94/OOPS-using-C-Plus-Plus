/*
 * structclass.cpp
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#include "structclass.h"


void mystr::buildstr(char *s)
{
	if(!s) *str='\0';
	else strcat(str,s);
}
void mystr::showstr()
{
	cout<<str<<"\n";
}

int main()
{
	mystr s;

	s.buildstr("");//init
	s.buildstr("Hello");
	s.buildstr("there!");

	s.showstr();

	return 0;
}

