// CircularList.h contains classes, class members, and member function declarations.

#ifndef CIRCULAR_LIST_H
#define CIRCULAR_LIST_H

#include <iostream>
#include <string>

using namespace std;

class CarNode {
	private:
		string make;
		string model;
		int year;
		CarNode* prev;
		CarNode* next;
	public:
		CarNode(string newMake, string newModel, int newYear);
	
		void print();
	
		friend class CircularList;
};

class CircularList {
	private:
		CarNode* head;
		int size;
	public:
		CircularList(string newMake, string newModel, int newYear);

		CircularList();

		void insert(string newMake, string newModel, int newYear);

		void remove();

		void print(bool dir);

		void roll(bool dir, int N);

		int getSize();
};

#endif // CIRCULAR_LIST_H