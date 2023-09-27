// 04.FastFood.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

void printQueue(queue<int>& queue)
{
	while (!queue.empty())
	{
		cout << queue.front() <<" ";
		queue.pop();
	}
}

int main()
{
	int food;
	cin >> food;

	string orders;
	getline(cin>>ws, orders);

	istringstream ordersStream(orders);
	int order;
	queue<int> orderQueue;
	while (ordersStream>>order)
	{
		orderQueue.push(order);
	}
	int max = orderQueue.front();

	while (!orderQueue.empty())
	{
		int current = orderQueue.front();
		if (current > max)
			max = current;
		if (food>=current)
		{
			food -= current;
			orderQueue.pop();
		}
		else
		{
			cout << max << endl;
			cout << "Orders left: ";
			printQueue(orderQueue);
			return 0;
		}
	}

	cout << max << endl;
	cout << "Orders complete" << endl;

	return 0;
}