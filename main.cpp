// main.cpp contains creation of a class object and calls of class member functions 

#include <iostream>
#include <string>
#include "CircularList.h"

using namespace std;

int main() {
	CircularList myCarList;

	myCarList.insert("Toyota", "Corolla", 2011);
	myCarList.insert("Kia", "Sorento", 2015);
	myCarList.insert("Volkswagen", "Golf", 2005);
	myCarList.insert("Honda", "Civic", 2013);
	myCarList.insert("Ford", "Fiesta", 2001);
	myCarList.print(true);
	cout << "-------------------------------------------" << endl;

	myCarList.roll(true, 2);
	myCarList.print(true);
	cout << "-------------------------------------------" << endl;

	myCarList.insert("Hyundai", "Elentra", 2014);
	myCarList.print(true);
	cout << "-------------------------------------------" << endl;

	myCarList.remove();
	myCarList.print(true);
	cout << "-------------------------------------------" << endl;

	myCarList.remove();
	myCarList.print(true);
	cout << "-------------------------------------------" << endl;

	return 0;
}