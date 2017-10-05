/*
 * Person.h
 *
 *      Author: Payaam Emami
 */

#ifndef DOG_H_
#define DOG_H_
#include <iostream>
using namespace std;

class Dog {
public:
	// Default Constructor
	Dog();
	// Constructor to set data values
	Dog(int id, string name, string address);
	// Get function for id value
	int getId();
	// Get function for name value
	string getName();
	// Get function for address value
	string getAddress();
private:
	int id;
	string name;
	string address;
};

#endif /* DOG_H_ */
