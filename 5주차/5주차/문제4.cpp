#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int vi(int t)
{
	if (t == 0)
		return 1;
	else
		return vi(t - 1) * 2;

}

int ba(int t,int n)
{
	if (t == 0)
		return n;
	else
		return (ba(t - 1, n) - vi(t - 1)) * 2;
}

int main()
{
	int t = 0;
	//ba(0, 1000);
	int n = vi(0);
	cout << n << endl;
	while (t<100)
	{
		cout << "vi: " << vi(t) << endl;
		cout <<"ba: "<< ba(t, 10) << endl;
		t++;
	}
}
