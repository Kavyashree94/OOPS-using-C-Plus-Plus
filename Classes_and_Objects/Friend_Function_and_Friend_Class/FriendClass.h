/*
 * FriendClass.h
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#ifndef FRIENDCLASS_H_
#define FRIENDCLASS_H_
#include<iostream>
#include<cstring>

using namespace std;

class TwoValues
{
	int a;
	int b;

public:
	TwoValues(int i,int j){a=i;b=j;}
	friend class Min;
};
class Min {
public:
	int min(TwoValues x);
};





#endif /* FRIENDCLASS_H_ */
