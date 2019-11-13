#include <iostream>

void PrintFloats(float * arr, size_t size) 
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}

int IntArraySum(int * arr, size_t size) 
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		total += arr[i];
	}
	return total;
}

void initBools(bool * arr, size_t size, bool defaultValue) 
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = defaultValue;
	}
}

int * zeroArray(size_t size) 
{
	int sizeCheck = 0;
	int * zeroValArray = new int[size];
	for (int i = 0; i < size; i++) 
	{
		zeroValArray[i] = 0;
	}

	return zeroValArray;
}

void ILoveNumbers() 
{
	int size;
	std::cout << "Howdy, how many numbers do you have?" << std::endl;
	std::cin >> size;
	std::cin.clear();
	int * favNumArray = new int[size];
	for (int i = 0; i < size; i++) 
	{
		std::cout << "What is your number " << i + 1 << "?" << std::endl;
		std::cin >>favNumArray[i];
		std::cin.clear();
	}
	std::cout << "Okay you have the numbers: ";

	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			std::cout << "and ";
		}
		std::cout << favNumArray[i];
		if (i != size - 1) 
		{
			std::cout << ", ";
		}
		else 
		{
			std::cout << "." << std::endl;
		}
	}

}

void getIntegerSubarray(int * arr, int * arr1, int start, int end) 
{
	int i = 0;
	for (start = start; start < end + 1; start++) 
	{
		arr1[i] = arr[start];
		i++;
	}
}

char GetPointer(char * letters, char charToCheck, bool caseSensitive) 
{
	for (int i = 0; i < strlen(letters); i++) 
	{
		if (caseSensitive == true && letters[i] == charToCheck || caseSensitive == true && letters[i] == charToCheck - 32 || caseSensitive == true && letters[i] == charToCheck + 32) 
		{
			return i;
		}

		if (letters[i] == charToCheck && caseSensitive == false) 
		{
			return i;
		}
	}
	return NULL;
}

int main() 
{
	float * floatVal = new float[5];
	for (int i = 0; i < 5; i++) { floatVal[i] = i + .69f; }

	int * intVal = new int[5];
	for (int i = 0; i < 5; i++) { intVal[i] = i + 1; }

	PrintFloats(floatVal, 5);
	std::cout << IntArraySum(intVal, 5) << std::endl;

	bool * boolArr = new bool[5];
	initBools(boolArr, 5, false);
	std::cout << boolArr[3] << std::endl;


	int * testArray = new int[5];
	testArray = zeroArray(5);
	std::cout << testArray[3] << std::endl;

	ILoveNumbers();

	int * origArray = new int[5]{1,2,3,4,5};
	int * copyArray = new int[5]{0,0,0,0,0};
	
	getIntegerSubarray(origArray, copyArray, 1, 2);
	std::cout << copyArray[0] << " " << copyArray[1] << " " << copyArray[2] << " " << copyArray[3] << " " << copyArray[4] << std::endl;

	char letters[5] = { 'g','E','f','l','O' };
	std::cout << GetPointer(letters, 'E', false);

	while (true) {}
	return 0;
}