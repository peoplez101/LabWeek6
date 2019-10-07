#include <iostream>
#include<stdlib.h>
#include<ctime>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

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
	string userInput;
	//cout << "Enter a string: ";
	//getline(cin, userInput);
	userInput = "HELLO";
	for (int l = 0; i < 3; l++)
	{
		cout << userInput(l);
	}
	system("pause");
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
}


int main()
{
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	task14();
	//task15();
	//task16();
	system("pause");
	return 0;
}