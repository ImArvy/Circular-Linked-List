// Reference for arrow operator - https://www.geeksforgeeks.org/arrow-operator-in-c-c-with-examples/

// CircularList.cpp contains function definitions/implementations.

#include <iostream>
#include <string>
#include "CircularList.h"

CarNode::CarNode(string newMake, string newModel, int newYear) {
	make = newMake;
	model = newModel;
	year = newYear;
	prev = next = NULL;
}

void CarNode::print() {
	cout << make << " " << model << " " << year << " ";
}

//------------------------------------------------------------------------

CircularList::CircularList(string newMake, string newModel, int newYear) {
	head = new CarNode(newMake, newModel, newYear);
	head->next = head;
	head->prev = head;
	size = 1;
}

CircularList::CircularList() {
	head = NULL;
	size = 0;
}

void CircularList::insert(string newMake, string newModel, int newYear) {
	if (size == 0) {
		head = new CarNode(newMake, newModel, newYear);
		head->next = head;
		head->prev = head;
	} else {
		CarNode* newCarNode = new CarNode(newMake, newModel, newYear);
		newCarNode->next = head;
		newCarNode->prev = head->prev;
		head->prev->next = newCarNode;
		head->prev = newCarNode;
		head = newCarNode;
	}
	size++;
}

void CircularList::remove() {
	if (size == 0) {
		cout << "List is Empty!";
	} else {
		CarNode* delNode = head;
		head->next->prev = head->prev;
		head->prev->next = head->next;
		head = head->next;
		delete delNode;
		size--;
	}
}

void CircularList::print(bool dir) {
	CarNode* current = head;
	if (dir == true) {
		for (int i = 0; i < size; i++) {
			current->print();
			current = current->next;
		}
	} else {
		for (int i = size; i >= 0; i--) {
			current->print();
			current = current->prev;
		}
	}
	cout << endl;
}

void CircularList::roll(bool dir, int N) {
	if (dir == true) {
		for (int i = 0; i < N; i++) {
			head = head->next;
		}
	} else {
		for (int i = N; i >= 0; i--) {
			head = head->prev;
		}
	}
}

int CircularList::getSize() {
	return size;
}