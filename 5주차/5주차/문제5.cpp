#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>


using namespace std;

int main()
{
	srand(time(NULL));
	while (1)
	{
		here:
		int k[3] = { rand() % 100 ,rand() % 100 ,rand() % 100 };
	//	while ((k[0] + k[1] + k[2]) % 3 == 0)
	//	{
	//		int k[3] = { rand() % 100 ,rand() % 100 ,rand() % 100 };
	//	}
	//	
	////	int arr[3] = { 1,100,25 };
	////	cout << n << endl;
		int arr[3] = { k[0],k[1],k[2] };
		if (k[0] % 3 == 0 && k[1] % 3 == 0 && k[2] % 3 == 0)
		{
			cout << "모두 3의 배수" << endl;
			cout << "-------------------------------------------------" << endl;
		}
		if ((k[0] + k[1] + k[2]) % 3 == 0&& !(k[0] % 3 == 0 && k[1] % 3 == 0 && k[2] % 3 == 0))
		{
			cout << "3의 배수" << endl;
			goto here;
		}
		
		for(int i=0;i<3;i++)
		cout << k[i] << " ";
		int rn;
		while (1)
		{
			rn = rand() % 3;
			//cout << rn << endl;
			if (rn == 0 && arr[1] > 0 && arr[2] > 0)
			{
				arr[0] += 2;
				arr[1] --;
				arr[2] --;
			}
			else if (rn == 1 && arr[0] > 0 && arr[2] > 0)
			{
				arr[1] += 2;
				arr[0] --;
				arr[2] --;
			}
			else if (rn == 2 && arr[1] > 0 && arr[0] > 0)
			{
				arr[2] += 2;
				arr[1] --;
				arr[0] --;
			}
			if ((arr[0] ==0 &&arr[1]==0 )|| (arr[2] == 0 && arr[1] == 0) || (arr[0] == 0 && arr[2] == 0))
				break;
		}
		for (int i = 0; i < 3; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

}