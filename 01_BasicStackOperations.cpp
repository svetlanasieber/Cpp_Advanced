// 01.BasicStackOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, s, x;
	cin >> n >> s >> x;

	if (n==0 || n <=s)
	{
		cout << 0 << endl;
		return 0;
	}


	int temp;
	stack<int> nums;
	for (size_t i = 0; i < n; i++)
	{
		cin >> temp;
		nums.push(temp);
	}

	for (size_t i = 0; i < s; i++)
	{
		nums.pop();
	}

	int min = nums.top();

	while (nums.size()>0)
	{
		int current = nums.top();
		if (current == x)
		{
			cout << "true" << endl;
			return 0;
		}

		if (current < min)
			min = current;
		nums.pop();
	}
	cout << min << endl;

	return 0;
}
