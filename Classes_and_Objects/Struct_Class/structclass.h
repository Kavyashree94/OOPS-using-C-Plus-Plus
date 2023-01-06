/*
 * structclass.h
 *
 *  Created on: 06-Jan-2023
 *      Author: Kavyashree
 */

#ifndef STRUCTCLASS_H_
#define STRUCTCLASS_H_

#include<iostream>
#include<cstring>

using namespace std;
struct mystr {
  void buildstr(char *s);//public
  void showstr();

private://now go private
  char str[256];
};


#endif /* STRUCTCLASS_H_ */
