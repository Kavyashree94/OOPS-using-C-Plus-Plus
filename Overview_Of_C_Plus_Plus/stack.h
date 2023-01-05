/*
 * stack.h
 *
 *  Created on: 26-Dec-2022
 *      Author: Kavyashree
 */

#ifndef STACK_H_
#define STACK_H_
#define SIZE 100

class stack {
	int stck[SIZE];
	int tos;

public:
	void init();
	void push(int i);
    int pop();
};


#endif /* STACK_H_ */
