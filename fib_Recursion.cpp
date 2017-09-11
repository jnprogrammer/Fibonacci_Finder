// Fibonacci series using recursion
#include<iostream>
#include<string>

using std::cout;
using std::string;
using namespace std;

int counter = 0; // needed to count how many recursive calls are made

unsigned long long fib(unsigned long long n);
bool userWantsContinue();

int main()
{
	unsigned long long n, answer;
	do{

	
	cout << "Enter a Fibonacci number to find: ";
	cin >> n;
	cout << "\n\n";

	answer = fib(n);cout << "Fibonacci found: ";

	cout << answer << " is the " << n;
	cout << "th Fibonacci Number\n\n";
	} while (userWantsContinue());
	return 0;


}

unsigned long long fib(unsigned long long n)
{
	if (n <= 2)
	{
		counter++;
		cout << "Recursive function Return " << counter << "\n";
		return(1);
	}
	else
	{
		cout << "Call fib(" << n - 1 << ") ";
		cout << "and fib(" << n - 2 << ")\n";
		return(fib(n - 1) + fib(n - 2));
	}

}

bool userWantsContinue(){
	char userInput = ' ';
	bool isValidInput = false;
	counter = 0;
	do{
		cout << "Would you like find another Fibonacci? \n";
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
