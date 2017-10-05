/*
 * SinglyLinkedList.h
 *
 *      Author: Payaam Emami
 *      Credits: Assisted by 'Starting out with C++ Early Objects 8th Edition'
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_
#include <iostream>

#include "Dog.h"
using namespace std;

namespace SinglyLinkedList {

// Represents a node in the linked list
struct Node {
	// Owners name
	string name;
	// Dog object
	Dog dog;
	// Pointer to the next node
	Node *next;
	// Constructor method
	Node(string name, Dog dog, Node *next = NULL) {
		this->name = name;
		this->dog = dog;
		this->next = next;
	}
};

class SinglyLinkedList {
public:
	// Default Constructor
	SinglyLinkedList();
	// Adds a new node with given name into the linked list
	void add(string name, const Dog& dog);
	// Removes a node by name from the linked list
	void remove(string name);
	// Displays the list values to the screen
	void displayList();
	// Destructor
	virtual ~SinglyLinkedList();
private:
	// Pointer to a node
	Node *head;
};

} /* namespace SinglyLinkedList */

#endif /* SINGLYLINKEDLIST_H_ */
