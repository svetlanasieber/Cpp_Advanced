// 05.FashionBoutique.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
# include<string>
#include <sstream>

using namespace std;
int main()
{
	string clothesString;
	getline(cin, clothesString);
	int capacity;
	cin >> capacity;
	int boxCounter = 1;
	stack<int> theStack;
	istringstream clothes(clothesString);
	int current;
	while (clothes >> current)
	{
		theStack.push(current);
	}

	int currentBoxCapacity = capacity;

	while (!theStack.empty())
	{
		int currentCloth = theStack.top();
		if (currentBoxCapacity>=currentCloth)
		{
			currentBoxCapacity -= currentCloth;
			theStack.pop();
		}
		else
		{
			boxCounter++;
			currentBoxCapacity = capacity;
		}
	}

	cout << boxCounter << endl;

	return 0;
}

