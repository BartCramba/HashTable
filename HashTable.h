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

namespace HashTable {

class HashTable {
public:
	// Constructor
	HashTable();
	// Destructor
	virtual ~HashTable();
private:
	SinglyLinkedList::SinglyLinkedList array[10];
};

} /* namespace HashTable */

#endif /* HASHTABLE_H_ */
