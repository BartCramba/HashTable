/*
 * main.cpp
 *
 *      Author: Payaam Emami
 */
#include "HashTable.h"

int main() {
	// Creates a hash table
	HashTable::HashTable obj;

	// Adds names to the hash table
	obj.put("Payaam");
	obj.put("Phillis");
	obj.put("Stanley");
	obj.put("Dwight");
	obj.put("Jim");
	obj.put("Pam");
	obj.put("Michael");

	return 0;
}
