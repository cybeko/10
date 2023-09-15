#include "DynamicArray.h"
#include<Windows.h>

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
	//cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S] {0};
}
DynamicArray::DynamicArray(const DynamicArray & a)
{
	//cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}
DynamicArray::~DynamicArray()
{
	//cout << "Destruct\n";
	delete[] ptr;   
}
void DynamicArray::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}
void DynamicArray::Print()const
{
	if (size <= 0)
	{
		cout << "Invalid array size." << endl;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << "\t";
		}
		cout << "\n---------------------------------\n";
	}
}
int * DynamicArray::GetPointer() const
{
	return ptr;
}
int DynamicArray::GetSize()const
{
	return size;
}
void DynamicArray::Resize(int newSize)
{
	if (newSize > 0)
	{
		if (size == newSize)
		{
			cout << "Array already consists of [" << size << "] elements." << endl;
		}
		else
		{
			if (newSize > size)
			{
				int* newPtr = new int[newSize];
				for (int i = 0; i < size; i++)
				{
					newPtr[i] = ptr[i];
				}
				for (int i = size; i < newSize; i++)
				{
					newPtr[i] = 0;
				}
				delete[] ptr;
				ptr = newPtr;
				size = newSize;
			}
			if (newSize < size)
			{
				int* newPtr = new int[newSize];

				for (int i = 0; i < newSize; i++)
				{
					newPtr[i] = ptr[i];
				}

				delete[] ptr;
				ptr = newPtr;
				size = newSize;
			}
		}
	}
	else
	{
		cout << "Invalid array size." << endl;
	}
}
void DynamicArray::Sort()
{
	int temp;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (ptr[j] > ptr[j + 1])
			{
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}
int DynamicArray::Search(int a)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == a)
		{
			return i;
		}
	}
	return -1;
}
void DynamicArray::Reverse()
{
	int* newPtr = new int[size];
	for (int i = 0; i < size; i++)
	{
		newPtr[i] = ptr[size - 1 - i];
	}
	delete[]ptr;
	ptr = newPtr;
}
