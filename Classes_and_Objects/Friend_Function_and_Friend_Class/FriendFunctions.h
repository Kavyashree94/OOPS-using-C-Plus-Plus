/*
 * FriendFunctions.h
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#ifndef FRIENDFUNCTIONS_H_
#define FRIENDFUNCTIONS_H_

#include<iostream>
#include<cstring>

using namespace std;


class C2;//Forward reference

class C1
{
	int status;

public:
	void set_status(int state);
	int idle(C2 b);
};

class C2
{
	int status;

public:
	void set_status(int state);
	friend int C1::idle(C2 b);

};



#endif /* FRIENDFUNCTIONS_H_ */
