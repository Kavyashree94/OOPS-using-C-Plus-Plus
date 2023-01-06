/*
 * FriendClass.cpp
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#include "FriendClass.h"


int Min::min(TwoValues x)
{
	return (x.a<x.b?x.a:x.b);
}

int main()
{
	TwoValues tv(2,3);
	Min m;
	//tv(2,3);
	cout<<m.min(tv);
	return 0;
}
