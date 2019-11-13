//  Utils.cpp

#include "Utils.h"

void arrayPrint(int numbers[], size_t size) 
{
	std::cout << "VALUES: ";
	for (int i = 0; i < size; i++) 
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}

int sumArray(int numbers[], size_t size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += numbers[i];
	}
	return total;
}

int largestValue(int numbers[], size_t size)
{
	int largest = -INT_MAX;

	for (int i = 0; i < size; i++)
	{
		if (largest < numbers[i]) 
		{
			largest = numbers[i];
		}
	}

	return largest;
}

int findValue(int numbers[], size_t size, int value, int start) 
{
	for (start; start < size; start++) 
	{
		if (numbers[start] == value) 
		{
			return start;
		}
	}
	return -1;
}

int countElement(int numbers[], size_t size, int value, int start)
{
	int eleCount = 0;
	for (start; start < size; start++)
	{
		if (numbers[start] == value)
		{
			eleCount++;
		}
	}
	return eleCount;
}

bool uniqueArrayCheck(int numbers[], size_t size)
{
	int count = 0;
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++) 
		{
			if (numbers[i] == numbers[j]) 
			{
				count++;
			}
		}
	}
	if (count > size) 
	{
		return false;
	}
	return true;
}
void arrayReversal(int numbers[], size_t size) 
{
	int placeHolder[20];
	int arrayHolder = 0;

	for (int i = 0; i < size; i++) 
	{
		placeHolder[i] = numbers[i];
	}
	
	for (int i = size - 1; i > -1; i--) 
	{
		numbers[i] = placeHolder[arrayHolder];
		arrayHolder++;
	}

	arrayPrint(numbers, size);
}
