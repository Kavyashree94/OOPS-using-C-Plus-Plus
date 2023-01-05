/*
 * Building.cpp
 *
 *  Created on: 05-Jan-2023
 *      Author: Kavyashree
 */

#include "Building.h"
#include <iostream>
using namespace std;

void Building::set_rooms(int num)
{
	rooms=num;
}

void Building::set_floors(int num)
{
	floors=num;
}

void Building::set_Area(int num)
{
	area=num;
}

int Building::get_rooms()
{
	return rooms;
}

int Building::get_floors()
{
	return floors;
}

int Building::get_Area()
{
	return area;
}

void house::set_bedrooms(int num)
{
	bedrooms=num;
}

void house::set_baths(int num)
{
	baths=num;
}

int house::get_bedrooms()
{
	return bedrooms;
}

int house::get_baths()
{
	return baths;
}

void school::set_classrooms(int num)
{
	classrooms=num;
}

void school::set_offices(int num)
{
	office=num;
}
int school::get_classrooms()
{
	return classrooms;
}

int school::get_offices()
{
	return office;
}

int main()
{
	house h;
	school s;

    h.set_Area(4500);
    h.set_bedrooms(5);
    h.set_rooms(12);
    h.set_bedrooms(5);
    h.set_baths(3);

    cout<<"house has"<<h.get_bedrooms();
    cout<<"bedrooms"<<"\n";

    s.set_rooms(200);
    s.set_classrooms(180);
    s.set_offices(5);
    s.set_Area(25000);

    cout<<"school has"<<s.get_classrooms();
    cout<<"classrooms"<<"\n";
    cout<<"Its area is "<<s.get_Area();

    return 0;
}
