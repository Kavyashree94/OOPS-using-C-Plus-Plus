/*
 * Unionclass.h
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#ifndef UNIONCLASS_H_
#define UNIONCLASS_H_

#include<iostream>
#include<cstring>

using namespace std;

union swap_byte{
	void swap();
	void set_byte(unsigned short i);
    void show_word();


    unsigned short u;
    unsigned short c[2];
};



#endif /* UNIONCLASS_H_ */
