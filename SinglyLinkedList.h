/*
 * SinglyLinkedList.h
 *
 *      Author: Payaam Emami
 *      Credits: Assisted by 'Starting out with C++ Early Objects 8th Edition'
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_
#include <iostream>
using namespace std;

// Represents a node in the linked list
struct Node {
	// Key
	string key;
	// Value
	string value;
	// Pointer to the next node
	Node *next;
	// Constructor method
	Node(string key, string value, Node *next = NULL) {
		this->key = key;
		this->value = value;
		this->next = next;
	}
};

class SinglyLinkedList {
public:
	// Default Constructor
	SinglyLinkedList();
	// Adds a new node with given key/value into the linked list
	void add(string key, string value);
	// Removes a node by key/value from the linked list
	void remove(string key);
	// Displays the list values to the screen
	void displayList();
	// Destructor
	virtual ~SinglyLinkedList();
private:
	// Pointer to a node
	Node *head;
};

#endif /* SINGLYLINKEDLIST_H_ */
