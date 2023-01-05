/*
 * Building.h
 *
 *  Created on: 05-Jan-2023
 *      Author: Kavyashree
 */

#ifndef BUILDING_H_
#define BUILDING_H_

class Building{
	int rooms;
	int floors;
	int area;
public:
	void set_rooms(int num);
	int get_rooms();
	void set_floors(int num);
	int get_floors();
	void set_Area(int num);
	int get_Area();
};

class house:public Building{
	int bedrooms;
	int baths;
public:
	void set_bedrooms(int num);
	int get_bedrooms();
	void set_baths(int num);
	int get_baths();

};

class school:public Building{
	int classrooms;
	int office;
public:
	void set_classrooms(int num);
	int get_classrooms();
	void set_offices(int num);
	int get_offices();
};


#endif /* BUILDING_H_ */
