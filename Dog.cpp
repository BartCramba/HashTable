/*
 * Person.cpp
 *
 *      Author: Payaam Emami
 */

#include "Dog.h"

// Default Constructor
Dog::Dog() {
	id = 0;
	address = "";
}

// Constructor to set data values
Dog::Dog(int id, string name, string address) {
	this->id = id;
	this->name = name;
	this->address = address;
}

// Get function for id value
int Dog::getId() {
	return id;
}

// Get function for name value
string Dog::getName() {
	return name;
}

// Get function for string value
string Dog::getAddress() {
	return address;
}

