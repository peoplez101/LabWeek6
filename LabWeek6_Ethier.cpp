#include <iostream>
#include<stdlib.h>
using namespace std;

void task1()
{
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

void task2()
{

}

int main()
{
	task1();
	system("pause");
	return 0;
}