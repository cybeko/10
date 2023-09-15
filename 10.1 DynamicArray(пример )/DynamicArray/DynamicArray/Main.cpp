#pragma once
#include "DynamicArray.h"

DynamicArray GetObj()
{
	DynamicArray obj(3);
	obj.InputRand();
	return obj;
}
void main()
{
	srand(time(NULL));

	cout << "Initializing array" << endl;
	DynamicArray a(5);
	a.InputRand();
	a.Print();

	cout << "\nSorting array\n";
	a.Sort();
	a.Print();

	cout << "\nReversing array\n";
	a.Reverse();
	a.Print();

	cout << "\nSearching number in array" << endl;
	cout << "Index: " << a.Search(5) << endl;
	
	cout << "\nResizing array from 5 to 3" << endl;
	a.Resize(3);
	a.Print();
	cout << "\nResizing array from 3 to 6" << endl;
	a.Resize(6);
	a.Print();
	cout << "\nResizing array from 6 to 6" << endl;
	a.Resize(6);
}