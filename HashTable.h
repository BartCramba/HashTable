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
	// Add an entry in the hash table
	void insert(string key, string value);
	// Remove an entry in the hash table
	void remove(string key);
	// Searches and returns the value associated by parameter key
	string search(string key);
	// Generates a hash based on the key and calculates an index
	int getHashIndex(string key);
private:
	// Size of the array declared as a class variable
	static const int ARRAY_SIZE = 10;
	// Array of linked list, separate chaining method for collision resolution
	SinglyLinkedList array[ARRAY_SIZE];
};

#endif /* HASHTABLE_H_ */
