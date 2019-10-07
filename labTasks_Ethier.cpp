/*
Game 1001 Lab tasks
Code written by Ryan Ethier & Others
*/

#include <iostream>
#include<stdlib.h>
#include<ctime>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

void example1()
{
	string userInput;
	//cout << "Enter a string: ";
	//getline(cin, userInput);
	userInput = "HELLO";
	for (int l = 0; l < 3; l++)
	{
		cout << userInput[l];
	}
	system("pause");
}

void task1()
{
	//create a new project using IDE
}

void task2()
{
	//create a source file
}

void task3()
{
	//set up source file using #include <iostream> and "using namespace std"
}

void task4()
{
	//output a friendly message to the user & output 1 new line character
	cout << "A friendly message";
	cout << '\t' << endl;
}

void task5()
{
	//tell the user how you feel
	//give two statements on two lines
	cout << "I love Mondays" << endl << "Because I have sooo much energy!" << endl;
}

void task6()
{
	//declare 3 variables.
	//	Height, Weight & Age
	//	Height & Weight -> whole/precise num, age -> whole num
	//using appropriate data types, ask user for height, weight & age, and output
	int age;
	float height, weight;

	cout << "Please enter your age: ";
	cin >> age;
	cout << "Please enter your height: ";
	cin >> height;
	cout << "Please enter your weight: ";
	cin >> weight;
	cout << endl;

	cout << "Age = " << age << endl;
	cout << "Height = " << height << endl;
	cout << "Weight = " << weight << endl;

}

void task7()
{
	//declare following unsigned variables -> unsigned short & (signed) double
	//ask user for two negative nums, & store/display values
	//display sum & difference of both variables
	unsigned short num1;
	double num2;
	cout << "Enter a negative number: ";
	cin >> num1;
	cout << "Enter a second negative number: ";
	cin >> num2;

	cout << "Highest value for short = " << numeric_limits<unsigned short>::max() << endl;
	cout << "lowest value for short = " << numeric_limits<short>::min() << endl;

	cout << "Highest value for double = " << numeric_limits<double>::max() << endl;
	cout << "Lowest value for double = " << numeric_limits<double>::min() << endl;
	
	cout << "Value for num1 = " << num1 << endl << "Value for num2 = " << num2 << endl;

	double sum, difference;

	sum = num1 + num2;
	difference = num1 - num2;
	
	cout << "The sum of " << num1 << " and " << num2 << " = " << sum << endl;
	cout << "The difference of " << num1 << " and " << num2 << " = " << difference << endl;

}

void task8()
{
	//ask user for price & tax rate, output total price w/ tax
	string name;
	int taxRate;
	double taxPercentage1, price;

	cout << "Enter the name of your item: ";
	getline(cin, name);
	cout << "Enter the price of your item: ";
	cin >> price;
	cout << "Enter the tax rate of your item (whole number): ";
	cin >> taxRate;

	taxPercentage1 = double(taxRate) / 100;
	cout << "The price is $" << price << "." << endl;
	cout << "The tax is $" << price * taxPercentage1 << "." << endl;
	cout << "The total price is $" << price + price * taxPercentage1 << endl;
}

void task9()
{
	//Tax calculator, asks user for price & tax rate, outputs tax total & price with tax
	double price, taxRate, taxTotal, priceWithTax;
	string productName;
	cout << "What is the name of the product? (Must be at least 5 characters long) ";
	getline(cin, productName);


	if (productName.size() < 5)
	{
		productName = "Default Product";
	}

	// productName = productName.size() < 5 ? "Default Product" : productName;

	cout << "What is the price of the product? (Must be at least $1) ";
	cin >> price;

	if (price < 1)
	{
		price = 1;
	}

	cout << "What is the tax rate? (Must be at least 5, Whole Number) ";
	cin >> taxRate;

	if (taxRate < 5)
	{
		taxRate = 5;
	}

	taxRate = taxRate * 0.01;

	taxTotal = price * taxRate;
	priceWithTax = price + taxTotal;


	//cout << "The product: " << productName << " is: $" << price << " without tax, $" << priceWithTax << " with tax, with a tax total of $" << taxTotal << "." << endl;
	cout << left << setw(20) << "Product Name:";
	cout << left << setw(20) << "Product Price:";
	cout << right << setw(7) << "Tax:";
	cout << right << setw(10) << "Total:" << endl;

	cout << left << setw(20) << productName;
	cout << left << setw(20) << fixed << showpoint << setprecision(2) << "$" << price;
	cout << right << setw(7) << fixed << showpoint << setprecision(2) << "$" << taxTotal;
	cout << right << setw(10) << fixed << showpoint << setprecision(2) << "$" << priceWithTax << endl;

	system("pause");

}

void task10()
{
	//output counter from 0 to 100 by 5s
	int i;
	i = 0;
	while (i <= 100)
	{
		cout << i << endl;
		i = i + 5;
	}
	system("pause");
}

void task11()
{
	//output counter from 100 to 0 by 4s
	int j;
	j = 100;
	while (j >= 0)
	{
		cout << j << endl;
		j = j - 4;
	}
	system("pause");
}

void task12()
{
	//output counter from 2 to 256 by powers of 2
	int k;
	k = 2;
	while (k <= 256)
	{
		cout << k << endl;
		k = pow(k, 2);
	}
	system("pause");
}

void task13()
{
	//ask user for 2 numbers, ensuring num1 < num2, count from 1 to 2 by ones
	int num1, num2;
	bool validChoice = false;

	while (validChoice == false)
	{
		cout << "Enter a number: ";
		cin >> num1;
		cout << "Enter a second number, which is greater than " << num1 << ".";
		cin >> num2;

		if (num1 > num2)
		{
			validChoice = true;
		}
		else
		{
			cout << "Invalid input! Please try again!" << endl;
		}
	}

	for (int i = num1; i <= num2; i++)
	{
		cout << i << endl;
	}
}

void task14()
{
	//ask the user for 3 numbers: Count from 1 to 2, incrementing by 3
	int num1, num2, num3;
	bool validNum;

	validNum = false;

	while (validNum == false)
	{
		cout << "Enter an integer: ";
		cin >> num1;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid data. Please try again!" << endl;
		}
		else
		{
			validNum = true;
		}
	}

	validNum = false;

	while (validNum == false)
	{
		cout << "Enter a second integer: ";
		cin >> num2;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid data. Please try again!" << endl;
		}
		else
		{
			validNum = true;
		}
	}

	validNum = false;

	while (validNum == false)
	{
		cout << "Enter an integer: ";
		cin >> num3;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid data. Please try again!" << endl;
		}
		else
		{
			validNum = true;
		}
	}

	/*num1 = 10;
	num2 = 1;
	num3 = 2;*/

	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << "Counting from: " << num1 << " to " << num2 << " by count of " << num3 << "." << endl;

	while (num1 <= num2)
	{
		cout << num1 << endl;
		num1 = num1 + num3;
	}


}

void task15()
{
	//Using a for loop, ask the user for 5 numbers, calculate the sum & product
	int num1, num2, num3, num4, num5, sum, product;
	bool validNum = false;
	
	for(int i = 1; i <= 5; i++)
	{
		if (i == 1)
		{
			validNum = false;

			while (validNum == false)
			{
				cout << "Enter an integer: ";
				cin >> num1;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Invalid data. Please try again!" << endl;
				}
				else
				{
					validNum = true;
				}
			}
			

		}
		else if (i == 2)
		{
			validNum = false;

			while (validNum == false)
			{
				cout << "Enter a second integer: ";
				cin >> num2;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Invalid data. Please try again!" << endl;
				}
				else
				{
					validNum = true;
				}
			}
		}
		else if (i == 3)
		{
			validNum = false;

			while (validNum == false)
			{
				cout << "Enter a third integer: ";
				cin >> num3;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Invalid data. Please try again!" << endl;
				}
				else
				{
					validNum = true;
				}
			}
		}
		else if (i == 4)
		{
			validNum = false;

			while (validNum == false)
			{
				cout << "Enter a fourth integer: ";
				cin >> num4;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Invalid data. Please try again!" << endl;
				}
				else
				{
					validNum = true;
				}
			}
		}
		else if (i == 5)
		{
			validNum = false;

			while (validNum == false)
			{
				cout << "Enter a fifth and final integer: ";
				cin >> num5;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << "Invalid data. Please try again!" << endl;
				}
				else
				{
					validNum = true;
				}
			}
		}
	}
	sum = num1 + num2 + num3 + num4 + num5;
	product = num1 * num2 * num3 * num4 * num5;

	cout << "The sum of all of your numers is: " << sum << "." << endl;
	cout << "The product of all of your numbers is: " << product << "." << endl;

}

void task16()
{
	//Generate a random number between 1 and 10. Get the user to guess what that number is.
	srand(time(NULL));
	int randNum = (rand() % 10) + 1;
	
	bool gameWon = false;
	int playerGuess;

	cout << "I'm going to come up with a number between 1 and 10. Keep on guessing until you get it right!" << endl;

	while (gameWon == false)
	{
		cout << "What is your guess? ";
		cin >> playerGuess;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid data. Please try again!" << endl;
		}
		else
		{
			if (playerGuess == randNum)
			{
				gameWon == true;
				cout << "You guessed my number correctly! You won!" << endl;
				break;
			}
			else
			{
				cout << "Close, but no cigar! Try again!" << endl;
			}
		}
	}

}

void task17()
{
	//Prime Number calculator: Asks user for number, determines if that number is a prime number.

	int userNum;
	bool primeCheck = false, numValid = false;

	cout << "Input an integer, this program will check if your number is a prime number or not." << endl;
	while (numValid == false)
	{
		cout << "Enter a number: ";
		cin >> userNum;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid data. Please try again!" << endl;
		}
		else
		{
			numValid = true;
		}
	}

	for (int i = userNum - 1; i > 1; i--)
	{
		if (userNum % i == 0) 
		{
			primeCheck = true;
			break;
		}
	}

	if (primeCheck == true)
	{
		cout << "Your number is NOT a prime number." << endl;
	}
	else
	{
		cout << "Your number IS a prime number." << endl;
	}
}


int main()
{
	//example1();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	//task16();
	task17();
	system("pause");
	return 0;
}