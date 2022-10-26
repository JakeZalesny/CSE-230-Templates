// templateClassProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std; 
using namespace templateClassProblem; 

int main()
{
	//
   // Test prompt
   //

   // prompt for a double
	double valueDouble;
	Stack <double> newStack; 
	newStack.prompt(valueDouble, "Enter a number");

	// prompt for a string
	string valueString; 
	Stack <string> stackStrings; 
	stackStrings.prompt(valueString, "Enter a string");

	// prompt for an integer
	int valueInt; 
	Stack <int> stackInts; 
	stackInts.prompt(valueInt, "Enter an Integer");

	//
	// Test stack
	//

	// a stack of doubles
	Stack <double> stackDoubles;
	stackDoubles.push(1.1);
	stackDoubles.push(2.2);
	stackDoubles.push(3.3);
	stackDoubles.pop();
	stackDoubles.pop();
	cout << "The first element is: "
		<< stackDoubles.top() << endl;

	// a stack of strings
	Stack <string> stackStrings; 
	stackStrings.push("hello");
	stackStrings.push("howdy");
	stackStrings.push("Good Day!");
	stackStrings.pop(); 
	stackStrings.pop(); 
	cout << "The first element is: "
		<< stackStrings.top() << endl; 

	// a stack of integers
	Stack <int> stackInts; 
	stackInts.push(1);
	stackInts.push(2);
	stackInts.push(3);
	stackInts.pop(); 
	stackInts.pop(); 
	cout << "The first element is: "
		<< stackInts.top() << endl; 

	return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
