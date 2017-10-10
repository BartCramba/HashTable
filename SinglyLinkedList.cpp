/*
 * SinglyLinkedList.cpp
 *
 *      Author: Payaam Emami
 *      Credits: Assisted by 'Starting out with C++ Early Objects 8th Edition'
 */

#include "SinglyLinkedList.h"

namespace SinglyLinkedList {

// Default constructor
SinglyLinkedList::SinglyLinkedList() {
	head = NULL;
}

// Adds a new node with given name into the linked list
void SinglyLinkedList::add(string key, string value) {
	// Check to see if we have an empty list
	if(head == NULL) {
		// Set head pointer to newly created node
		head = new Node(key, value);
	}
	// Else if the list is not empty
	else {
		// Create temp pointer to iterate list starting from head
		Node *temp = head;
		// Traverse over the list to the last element
		while(temp->next != NULL) {
			temp = temp->next;
		}
		// Now at the last element in the list, add new node to the end
		temp->next = new Node(key, value);
	}
}

// Removes a node by name from the linked list
void SinglyLinkedList::remove(string key) {
	Node *temp = head;
	Node *prev = NULL;

	// Checks to see if a list exists
	if(head) {
		// Checks if the head is the element to be removed
		if(head->key == key) {
			// Moves head over to the next node in the list
			head = head->next;
			// Deletes the matched node
			delete temp;
		}
		// Else checks the rest of the linked list
		else {
			// Traverse through the list
			while(temp != NULL && temp->key != key) {
				// Moves pointers to next nodes
				prev = temp;
				temp = temp->next;
			}
			// If temp exists, this means its name matches parameter name
			if(temp) {
				// Links the previous node, to the next next node
				prev->next = temp->next;
				// Deletes the matched node
				delete temp;
			}
		}
	}
}

// Displays the linked list values to the screen
void SinglyLinkedList::displayList() {
	// Pointer that traverses list to display values
	Node *temp = head;
	// If the linked list has at least one node
	if(temp != NULL) {
		// Traverses the list and displays values
		while(temp) {
			cout << "key: " << temp->key << endl;
			cout << "value: " << temp->value << endl;
			temp = temp->next;
		}
		cout << endl;
	}
	// Else the list is empty
	else {
		cout << "The list is empty!" << endl;
	}
}

// Destructor
SinglyLinkedList::~SinglyLinkedList() {
	// Pointer that traverses list for deletion
	Node *temp = head;
	// While the list has nodes
	while(temp) {
		// Pointer used to delete nodes
		Node *nodeToDelete = temp;
		// Moves to next node in list
		temp = temp->next;
		// Deletes node
		delete nodeToDelete;
	}
}

} /* namespace SinglyLinkedList */
