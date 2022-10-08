#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, c = 0, n, choice, i, choice2=0, n1, n2=0;
	do
	{
		cout << "Enter number(i.e 1,2,3) of your choice from the following :" << endl;
		cout << "1. Display nth term in the Fibonacci sequence" << endl;
		cout << "2. Display first n Fibonacci numbers" << endl;
		cout << "3. Display Fibonacci numbers between m and n" << endl;
		cin >> choice;
		if (choice != 1 && choice != 2 && choice != 3)
			cout << "enter a valid number \neither 1 , 2 , 3" << endl;
		if (choice == 1)
		{


			cout << "To display the nth term in fibonacci series, enter the nth term number\t" << endl;
			cin >> n;
			a = 0, b = 1, c = 0;
			for (i = 1; i <= n - 2; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
			cout << endl << n << "th term of the Fibonacci sequence is : " << c << endl;
		}
		if (choice == 2)
		{
			cout << "In order to display first n fibonacci numbers, enter the nth term number\t" << endl;
			cin >> n;
			a = 0, b = 1, c = 0; 
			for (i = 1; i <= n - 2; i++)
			{
				if (i == 1)
				{
					cout << "\nThe first " << n << " fibonacci numbers are " << endl;
					cout << a << "," << b;
				}
				c = a + b;
				cout << "," << c;
				a = b;
				b = c;
			}
		}
		if (choice == 3)
		{
			cout << "Enter starting number of range\t" << endl;
			cin >> n1;
			cout << "Enter ending number of range\t" << endl;
			cin >> n2;
			a = 0, b = 1, c = 0;
			cout << "The fibonacci numbers between " << n1 << "and " << n2 << " are : ";
			for (i = n1 ; i <= n2 ; i++)
			{
				if (n1 == 1)
				cout << a << "," << b;
				c = a + b;
				if(c >= n1 && c <= n2)
				cout << "," << c;
				a = b;
				b = c;
			}

		}
		cout << "\ndo you want to change your choice ?" << endl;
		cout << "enter 1 for YES " << endl;
		cout << "enter 0 for NO " << endl;
		cin >> choice2;
	}
	while (choice2 == 1);
}