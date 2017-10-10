/*
 * HashTable.h
 *
 *      Author: Payaam Emami
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_
#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

class HashTable {
public:
	// Constructor
	HashTable();
	// Add an entry in the hash table
	void put(string key, string value);
	// Remove an entry in the hash table
	void remove(string key);
	// Destructor
	virtual ~HashTable();
private:
	// Size of the array declared as a class variable
	static const int ARRAY_SIZE = 10;
	// Array of linked list, separate chaining method for collision resolution
	SinglyLinkedList array[ARRAY_SIZE];
};

#endif /* HASHTABLE_H_ */
