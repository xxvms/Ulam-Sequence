// Ulam-Sequence.cpp : Defines the entry point for the console application.
//
/*

5. A mathematician named Ulam proposed generating a sequence of numbers from any positive integer n(n > 0) as follows:
- If n is 1, stop.
- If n is even, the next number is n/2.
- If n is odd, the next number is 3*n + 1.
- Continue with this process until reaching 1.

Here are some examples for the first few integers.
2 -> 1
2 -> 10 -> 5 -> 16 -> 8-> 4-> 2-> 1
4 -> 2-> 1
5-> 16-> 8-> 4-> 2-> 1
6-> 3-> etc as for 3 above.
7 -> 22 -> 11 -> 34 -> 17 -> 52 -> 26 -> 13 -> 40 -> 20 -> 10 -> 5 -> see 5 above.

Develop a program that will read a value for n and generate the ulam sequence

something about Ulam
https://en.wikipedia.org/wiki/Stanislaw_Ulam

*/

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int inputNumber = 0;

	cout << "Please type number: ";
	cin >> inputNumber;
	

	for  (; inputNumber >= 2;)
	{
		if (inputNumber % 2 == 0)
		{
			inputNumber = inputNumber / 2;
			cout << inputNumber << " ";
		}
		else
		{
			inputNumber = ((inputNumber * 3) + 1);

			cout << inputNumber << " ";
		}
	}
	
	system("pause");

    return 0;
}
