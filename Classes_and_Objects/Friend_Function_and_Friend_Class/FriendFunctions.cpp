/*
 * FriendFunctions.cpp
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#include "FriendFunctions.h"

void C1::set_status(int state)
{
	status=state;
}


void C2::set_status(int state)
{
	status=state;
}

int C1::idle(C2 b)
{
	if(status||b.status) return 0;
	else return 1;
}

int main()
{
	C1 x;
	C2 y;
	x.set_status(0);
	y.set_status(0);
	if(x.idle(y)) cout<<"screen is being used\n";
	else cout<<"Screen is not being used\n";

	x.set_status(1);
	if(x.idle(y)) cout<<"screen is being used\n";
	else cout<<"Screen is not being used\n";

	return 0;
}
