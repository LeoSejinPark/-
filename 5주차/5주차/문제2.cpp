#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int find_min(vector<int> a)
{

	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a.size(); j++)
			if (a[i] < a[j])
				swap(a[i], a[j]);
	return a[0];
}


int coin_change(int M, vector<int> c)
{

	int i = 0;

	while (i < c.size())
	{
		if (M == c[i])
			return 1;
		else
			i++;
	}
	vector<int> a;
	i = 0;
	while (i <c.size())
	{

		if (M - c[i] > 0)
			a.push_back(coin_change(M - c[i], c));
		else
			a.push_back(100000);
		i++;
	}
	return find_min(a) + 1;


}

int main()
{
	vector<int> c = { 1,3,5};
	int M = 11;
	int result = coin_change(M, c);
	cout << result << endl;
}