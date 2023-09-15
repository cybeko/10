#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int * ptr; // ��������� �� �����. ������
	int size;  // ������ ������� 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void InputRand();// rand
	void Print()const;// ����� �� �������
	int * GetPointer()const;
	int GetSize()const;


	void Sort();
	int Search(int a);
	void Reverse();
	void Resize(int newSize);


	// ����������� ��������� ������:
	// 
	//void ReSize(int size);// ��������� ������� �������
	//void Sort();// ����������(����� �������� ����������)
	//int Search(int a); // ����� �������� � �������, ���������� ������ ���������� ��., ���� -1.
	//void Reverse(); // �������������� ������������������ ��������� � �������� �������, ������� 12345 -> 54321
};

