
// Iteration - this verison is faster and doesn't use recursion.
// Fibonacci series using Iteration
#include<iostream>
#include<stdio.h>
#include<string>

using std::cout;
using std::string;
using namespace std;


unsigned long long fib(unsigned long long n); // an unsigned long long will give this program the ablity to reach 18 trillion numbers in calculation.
bool userWantsContinue();

int main()
{
	unsigned long long n, answer;
	do {
		cout << "Enter a Fibonacci number to find: ";
		cin >> n;
		cout << "\n\n";

		answer = fib(n);

		cout << answer << " is the " << n;
		cout << "th Fibonacci Number\n\n";
	} while (userWantsContinue());
	return 0;
}

unsigned long long fib(unsigned long long n)
{
	cout << "Processing fibonacci ( " << n << " ). . . \n";
	unsigned long long term1 = 0, term2 = 1, fibNumber = 0;
	for (unsigned long long i = 0; i <= n; i++)//c is count for the loop, n is the fib place to find the number for
	{
		if (i <= 1)
			fibNumber = i;
		else
		{
			fibNumber = term1 + term2;
			term1 = term2;
			term2 = fibNumber;

			//cout << "and fib(" << n - 1 << ").\n";
		}
		cout << " fib " << i << ":" << "( " << fibNumber << " ) \n"; // even using the printf I still got he issue. 
																	 //printf("%llu\n",fibNumber );
	}
	return fibNumber;
}

bool userWantsContinue() {
	char userInput = ' ';
	bool isValidInput = false;
	do {
		cout << "Would you like find another Fibonacci number? \n";
		cout << "Enter y for yes and enter n for no \n";
		cin >> userInput;

		isValidInput = (userInput == 'y') || (userInput == 'n');
		if (!isValidInput)
		{
			cout << "That is not valid input \n";
		}
	} while (!isValidInput);

	return (userInput == 'y');
}
