//  Main.cpp

#include <iostream>
#include <cstring>

char ToUpper(char string)
{
	if (string >= 97 && string <= 122)
	{
		string -= 32;
	}

	return string;
}

void RemoveWhitespace(char string[]) 
{
	for (int i = 0; i < strlen(string); i++) 
	{
		if (string[i] != 32) 
		{
			std::cout << string[i];
		}
	}
	std::cout << std::endl;
	
}

void OverWriteString(char a[], char b[], int start, int end) 
{
	for (start = start; start < end; start++) 
	{
		b[start] = a[start];
	}
}

bool PalindromeCheck(char string[], size_t size) 
{
	int isPalindrome = 0;
	char strCheck[10] = {};

	for (int i = 0; i < size; i++) 
	{
		strCheck[size - i - 1] = string[i];
	}

	for (int i = 0; i < size; i++) 
	{

		if (string[i] == strCheck[i])
		{
				isPalindrome++;
		}
	}

	std::cout << strCheck << string << std::endl;

	if (isPalindrome < size) 
	{
		return false;
	}
	return true;
}

void StringReverse(char string[], size_t size)
{
	char revString[20] = {};

	for (int i = 0; i < size; i++)
	{
		if(string[size - i - 1] != 52)
		revString[i] = string[size - i - 1];
	}

	string = revString;

	std::cout << revString << std::endl;
}

int StringLength(char string[]) 
{
	int total = 0;
	for (int i = 0; i < strlen(string); i++) 
	{
		if (string[i] != '\0') 
		{
			total++;
		}
	}
	return total;
}

void StringTrimming(char string[]) 
{
	bool beginning = false;
	for (int i = 0; i < strlen(string); i++) 
	{
		if (beginning == false) 
		{
			if (string[i] != 32)
			{
				std::cout << string[i];
				beginning = true;
			}
			else
			{

			}
		}
		else if (beginning == true) 
		{
			if (string[i] == 32 && string[i + 1] == 32) 
			{
				beginning = false;
			}
			else 
			{
				std::cout << string[i];
			}
		}	
	}
}

int main() 
{
	/*
	char name[50] = {};
	std::cout << "What is your name?" << std::endl;
	std::cin.getline(name, 50);
	std::cout << "Hello ";
	for (int i = 0; i < 50; i++) 
	{
		std::cout << name[i];

		if (name[i] == '\0')
		{
			std::cout << "!" << std::endl;
			break;
		}
	}
	char input[50] = {};

	std::cin >> input;

	std::cout << "You said: " << input << std::endl;

	char colorA[50] = "Orange";
	char colorB[50] = "Red";

	if (strcmp(input, colorA) != 0 && strcmp(input, colorB) != 0) 
	{
		std::cout << "Ive never heard of that color before." << std::endl;
	}
	else if(strcmp(input, colorA) == 0)
	{
		std::cout << "Orange is also a fruit" << std::endl;
	}
	else if (strcmp(input, colorB) == 0)
	{
		std::cout << "Red? Like the color of roses?" << std::endl;
	}

	char toUpperString[] = "This needs to be capitalized!";

	std::cout << toUpperString << std::endl;

	for (int i = 0; i < strlen(toUpperString); i++) 
	{
		toUpperString[i] = ToUpper(toUpperString[i]);
	}

	std::cout << toUpperString << std::endl;
	*/
	std::cout << "What is your sentance you want to remove the spaces from?" << std::endl;
	char pInput[50] = {};
	std::cin;
	std::cin.getline(pInput, 50);
	RemoveWhitespace(pInput);

	std::cout << "What is your sentence did you want to overwrite the other with?" << std::endl;
	char pInput2[50] = {};
	char overWrite[50] = {};
	std::cin;
	std::cin.getline(pInput2, 50);
	OverWriteString(pInput2, overWrite, 0, 13);
	std::cout << overWrite << std::endl;

	char palCheck[6] = "madam";
	std::cout << PalindromeCheck(palCheck, strlen(palCheck)) << std::endl;

	char strLenCheck[20] = "Humpherys Palace";
	std::cout << StringLength(strLenCheck) << std::endl;

	char strReversCheck[15] = "Reverse Please";
	StringReverse(strReversCheck, 14);
	std::cout << strReversCheck << std::endl;

	char stringTrim[] = "     YEET THE FEET     ";
	StringTrimming(stringTrim);

	while (true) {}
	return 0;
}

