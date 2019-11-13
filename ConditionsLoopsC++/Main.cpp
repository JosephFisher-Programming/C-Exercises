#include <iostream>
#include <time.h>

//#include <windows.h>

int main()
{
	//  Problem A.

	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	std::cout << "\n";

	//  Problem B.

	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	std::cout << "\n";

	//  From 1 to 100.

	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << std::endl;
	}

	std::cout << "\n";

	//  Age Gate.

	int age;

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;

	if (age >= 18)
	{
		std::cout << "You are an adult" << std::endl;
	}

	if (age >= 50)
	{
		std::cout << "You can join AARP" << std::endl;
	}

	if (age >= 65)
	{
		std::cout << "You are elligable for retirement benefits" << std::endl;
	}

	std::cout << "\n";

	//  The Smallest Number.

	int smallestNumber = INT_MAX;
	int loopNum;
	int playerNumber;

	std::cout << "How many numbers are you going to input?" << std::endl;
	std::cin >> loopNum;

	for (int i = 0; i < loopNum; i++)
	{
		std::cout << "What is your number?" << std::endl;
		std::cin >> playerNumber;
		if (playerNumber < smallestNumber)
		{
			smallestNumber = playerNumber;
		}
	}

	std::cout << "Your smallest number given was " << smallestNumber << " !" << std::endl;

	std::cout << "\n";

	// Even or Odd.

	int evenOddNum;

	std::cout << "What is your number, I will tell you if it is even or odd." << std::endl;
	std::cin >> evenOddNum;
	if (evenOddNum % 2 == 1)
	{
		std::cout << "Your number is odd!" << std::endl;
	}
	else
	{
		std::cout << "Your number is even!" << std::endl;
	}

	std::cout << "\n";

	//  From 100 to 1.

	int i = 100;

	while (i > 0)
	{
		std::cout << i << std::endl;
		i--;
	}

	std::cout << "\n";

	//  For All Leap Years.

	for (int i = 4; i < 3001; i += 4)
	{
		if (i % 100 == 0)
		{

		}
		else
		{
			std::cout << i << std::endl;
		}
	}

	std::cout << "\n";

	//  From 1995 to 2019.

	int year = 1994;
	do
	{
		year++;
		std::cout << year << std::endl;
	} while (year < 2019);

	std::cout << "\n";

	//  Printing Multiples of Five.

	int multStart;
	int multEnd;

	std::cout << "What multiple do you want to start on?" << std::endl;
	std::cin >> multStart;

	std::cout << "What multiple do you want to end on?" << std::endl;
	std::cin >> multEnd;
	std::cout << "\n";

	for (multStart; multStart - 1 < multEnd; multStart)
	{
		std::cout << multStart * 5 << std::endl;
		multStart++;
	}

	//  Clamping Numbers.

	int input;

	std::cout << "What is your number?" << std::endl;
	std::cin >> input;

	if (input < 15)
	{
		input = 15;
	}

	if (input > 30)
	{
		input = 30;
	}

	std::cout << "Your clamped number is " << input << std::endl;

	//  Spice Rating Exercise.

	int spiceRating;

	std::cout << "What is your spice rating?" << std::endl;
	std::cin >> spiceRating;

	if (spiceRating > 5)
	{
		spiceRating = 5;
	}

	if (spiceRating < 0)
	{
		spiceRating = 0;
	}
	else if (spiceRating == NULL)
	{
		spiceRating = 0;
	}

	std::cout << "Your Spice Rating is " << spiceRating << "\n" << "\n";

	//  Cookie Box Exercise.

	int cookieNum;

	std::cout << "How many cookies would you like? (Multiples of 23)" << std::endl;
	std::cin >> cookieNum;

	if (!cookieNum % 23 == 0)
	{
		cookieNum = cookieNum - (cookieNum % 23);
	}

	if (cookieNum / 23 == 0)
	{
		std::cout << "ERROR 404 COOKIES NOT FOUND!" << "\n" << "\n";
	}

	std::cout << "Your number of cookies is " << cookieNum << "\n" << "\n";

	//  Book Ordering Exercise.

	int bookOrder;

	std::cout << "How many Sketch Books would you like to order? (3pk and must be more than nine ordered but less than 30)" << std::endl;
	std::cin >> bookOrder;

	if (bookOrder < 9 || bookOrder > 30)
	{
		std::cout << "ERROR TOO MUCH GREED OVERFLOW" << std::endl;
	}
	else if (!bookOrder % 3 == 0)
	{
		bookOrder = bookOrder - (bookOrder % 3);
		std::cout << "Your order is for " << bookOrder << " books!" << std::endl;
	}

	//  Motion Blur Enabler.

	char playerInput = 0;

	std::cout << "Would you like to turn on motion blur? (y/n)" << std::endl;
	std::cin >> playerInput;

	if (playerInput != 'N' && playerInput != 'n' && playerInput != 'Y' && playerInput != 'y')
	{
		std::cout << "ERROR: USER IS DYSLEXIC" << std::endl;
	}

	if (playerInput == 'Y' || playerInput == 'y')
	{
		std::cout << "Motion blur is on!" << std::endl;
	}

	if (playerInput == 'N' || playerInput == 'n')
	{
		std::cout << "Motion blur is off!" << std::endl;
	}
	
	//  Function Disposable Calculator.

	char calInput = 0;
	int num1;
	int num2;
	int currentNum;
	bool repeatNum = false;

	while (true)
	{
		std::cout << "OPERATOR" << std::endl;
		std::cin >> calInput;

		if (calInput == 'e' || calInput == 'E')
		{
			break;
		}

		if (calInput == 'c' || calInput == 'C')
		{
			system("cls");
			repeatNum = false;
			continue;
		}

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (!repeatNum) {
			std::cout << "FIRST OPERAND" << std::endl;
			std::cin >> num1;
		}

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::cout << "SECOND OPERAND" << std::endl;
		std::cin >> num2;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (calInput == '+')
		{
			if (!repeatNum) {
				currentNum = num1 + num2;
			}
			else
			{
				currentNum = currentNum + num2;
			}
			std::cout << "RESULT" << std::endl;
			std::cout << currentNum << std::endl;
			repeatNum = true;
		}

		if (calInput == '-')
		{
			if (!repeatNum) {
				currentNum = num1 - num2;
			}
			else
			{
				currentNum = currentNum - num2;
			}
			std::cout << "RESULT" << std::endl;
			std::cout << currentNum << std::endl;
			repeatNum = true;
		}

		if (calInput == '*')
		{
			if (!repeatNum) {
				currentNum = num1 * num2;
			}
			else
			{
				currentNum = currentNum * num2;
			}
			std::cout << "RESULT" << std::endl;
			std::cout << currentNum << std::endl;
			repeatNum = true;
		}

		if (calInput == '/')
		{
			std::cout << "RESULT" << std::endl;
			if (num2 == 0)
			{
				std::cout << "ERROR CANNOT DIVIDE BY ZERO" << std::endl;
				continue;
			}
			if (!repeatNum) {
				currentNum = num1 / num2;
			}
			else
			{
				currentNum = currentNum / num2;
			}
			std::cout << currentNum << std::endl;
			repeatNum = true;
		}
	}
		//  Battle Checks.

		int pInput0 = 0;
		char pInput1 = 0;
		int pInput2 = 0;
		char pInput3 = 0;
		int pInput4 = 0;
		int pScore = 0;
		int dScore = 0;

		std::cout << "How would you rate your strength on a scale of 1 to 10?" << std::endl;
		std::cin >> pInput0;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (pInput0 > 4)
		{
			pScore++;
			std::cout << "You Score a Point! \n" << std::endl;
		}
		else if (pInput0 == 4)
		{
			std::cout << "Neither of you scores a point! \n" << std::endl;
		}
		else
		{
			dScore++;
			std::cout << "The dino baby scores a point! \n" << std::endl;
		}

		std::cout << "Which of the following did you take into battle? (Rock, Paper, Scissors) (Please use the first letter!)" << std::endl;
		std::cin >> pInput1;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (pInput1 == 'P' || pInput1 == 'p')
		{
			std::cout << "Neither of you scores a point! \n" << std::endl;
		}
		else if (pInput1 == 'S' || pInput1 == 's')
		{
			pScore++;
			std::cout << "You score a point! \n" << std::endl;
		}
		else
		{
			dScore++;
			std::cout << "The dino baby scores a point! \n" << std::endl;
		}

		std::cout << "How many battles have you won?" << std::endl;
		std::cin >> pInput2;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (pInput2 == 2)
		{
			std::cout << "Neither of you scores a point! \n" << std::endl;
		}
		else if (pInput2 > 2)
		{
			pScore++;
			std::cout << "You score a point! \n" << std::endl;
		}
		else if (!pInput2 >= 2)
		{
			dScore++;
			std::cout << "The dino baby scores a point! \n" << std::endl;
		}

		std::cout << "Did you get enough sleep?" << std::endl;
		std::cin >> pInput3;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (pInput3 == 'Y' || pInput3 == 'y')
		{
			pScore++;
			std::cout << "You scored a point! \n" << std::endl;
		}
		else
		{
			dScore++;
			std::cout << "The dino baby scores a point! \n" << std::endl;
		}

		std::cout << "How much Vitamin C do you get everyday? (in Milligrams)" << std::endl;
		std::cin >> pInput4;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (pInput4 >= 75)
		{
			pScore++;
			std::cout << "You scored a point! \n" << std::endl;
		}
		else
		{
			dScore++;
			std::cout << "The dino baby scores a point! \n" << std::endl;
		}

		if (dScore > pScore)
		{
			std::cout << "The dino baby wins! \n" << std::endl;
		}
		if (dScore < pScore)
		{
			std::cout << "You win the game! \n" << std::endl;
		}

		//  The largest number.

		int largestNumber = INT_MIN;
		int loopNum1;
		int playerNumber1;

		std::cout << "How many numbers are you going to input?" << std::endl;
		std::cin >> loopNum1;

		for (int i = 0; i < loopNum1; i++)
		{
			std::cout << "What is your number?" << std::endl;
			std::cin >> playerNumber1;
			if (playerNumber1 > largestNumber)
			{
				largestNumber = playerNumber1;
			}
		}

		std::cout << "Your largest number given was " << largestNumber << " !" << std::endl;

		std::cout << "\n";

		//  Even or Odd 2.

		int startNum = 0;
		int endNum = 0;

		std::cout << "What is your starting num?" << std::endl;
		std::cin >> startNum;

		std::cout << "What is your ending num?" << std::endl;
		std::cin >> endNum;

		for (startNum; startNum - 1 < endNum; startNum++)
		{
			if (startNum % 2 == 1)
			{
				std::cout << "odd";
			}
			else
			{
				std::cout << "even";
			}
			if (startNum < endNum)
			{
				std::cout << ", ";
			}
			else
			{
				std::cout << "!" << std::endl;
			}

		}

		//  Fizz Bizz.

		int fizzBizzStart = 0;
		int fizzBizzEnd = 0;

		std::cout << "What is your starting num?" << std::endl;
		std::cin >> fizzBizzStart;

		std::cout << "What is your ending num?" << std::endl;
		std::cin >> fizzBizzEnd;

		for (fizzBizzStart; fizzBizzStart - 1 < fizzBizzEnd; fizzBizzStart++)
		{
			if (fizzBizzStart % 3 == 0 && fizzBizzStart % 5 == 0)
			{
				std::cout << "FizzBizz";
			}
			else if (fizzBizzStart % 3 == 0)
			{
				std::cout << "Fizz";
			}
			else if (fizzBizzStart % 5 == 0)
			{
				std::cout << "Bizz";
			}
			else
			{
				std::cout << fizzBizzStart;
			}
			if (fizzBizzStart < fizzBizzEnd)
			{
				std::cout << ", ";
			}
			else
			{
				std::cout << "!" << std::endl;
			}

		}

		//  Grid Generator.

		int xWidth = 0;
		int yWidth = 0;

		std::cout << "What is your x value?" << std::endl;
		std::cin >> xWidth;

		std::cout << "What is your y value?" << std::endl;
		std::cin >> yWidth;

		for (int i = 0; i < yWidth; i++)
		{
			for (int j = 0; j < xWidth; j++)
			{
				std::cout << "X";
			}
			std::cout << std::endl;
		}

		//  Higher or Lower.

		int pGuess;
		srand(time(NULL));
		int rdNum = (rand() % 10) + 1;
		bool win = false;

		std::cout << "YOU HAVE TO GUESS MY NUMBER, IT'S BETWEEN 1 AND 10. I WILL TELL YOU IF MY NUMBER IS HIGHER OR LOWER" << std::endl;

		for (int i = 0; i < 5; i++)
		{
			std::cout << "Round " << i + 1 << " What is your guess?" << std::endl;
			std::cin >> pGuess;

			if (pGuess == rdNum)
			{
				std::cout << "YOU WON THE GAME!" << std::endl;
				win = true;
				break;
			}
			else if (pGuess < rdNum)
			{
				std::cout << "MY NUMBER IS HIGHER!" << std::endl;
			}
			else if (pGuess > rdNum)
			{
				std::cout << "MY NUMBER IS LOWER!" << std::endl;
			}
		}

		if (win == false)
		{
			std::cout << "YOU LOSE YOU SUCK" << std::endl;
		}

		//  Pyramid Generator.

		int pyrWidth = 0;
		int pyrHeight = 0;

		std::cout << "What is the width of the pyramid?" << std::endl;
		std::cin >> pyrWidth;

		std::cout << "What is the height of the pyramid?" << std::endl;
		std::cin >> pyrHeight;

		for (int i = 0; i - 1 < pyrHeight; i++)
		{
			if (i == 0) {
				std::cout << "o ";
			}
			else
			{
				std::cout << "| ";
			}

			for (int j = 0; j < (pyrWidth * pyrHeight) * 2; j++)
			{
				if (i == 0)
				{
					std::cout << " ";
				}

				if (i > 0)
				{
					if (j >= pyrWidth * (pyrHeight - i) && j < pyrWidth * (i + pyrHeight))
					{
						std::cout << "x";
					}
					else
					{
						std::cout << " ";
					}
				}
			}
			if (i == 0) {
				std::cout << " o";
			}
			else
			{
				std::cout << " |";
			}
			std::cout << std::endl;
		}
		while (true) {}

		return 0;
	}