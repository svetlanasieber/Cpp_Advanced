// 06.TruckTour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
using namespace std;

bool isPossible(queue<int> amounts, queue<int> distances)
{
	int capacity = 0;
	while (!amounts.empty())
	{
		capacity += amounts.front();
		capacity -= distances.front();
		if (capacity < 0)
			return false;
		amounts.pop();
		distances.pop();
	}

	return true;
}

int main()
{
	int n;
	cin >> n;
	queue<int> pumpAmounts;
	queue<int> distances;
	int amount, distance;
	for (size_t i = 0; i < n; i++)
	{
		cin >> amount >> distance;
		pumpAmounts.push(amount);
		distances.push(distance);
	}

	for (size_t i = 0; i < n; i++)
	{
		if (isPossible(pumpAmounts, distances))
		{
			cout << i << endl;
			return 0;
		}

		pumpAmounts.push(pumpAmounts.front());
		pumpAmounts.pop();
		distances.push(distances.front());
		distances.pop();
	}
	return 0;
}
