#include <iostream>
using namespace std;


int main () {
	int X[] = {23, 24, 54, 32, 43, 56, 12, 78, 86, 22}, imaks, temp;
	//menaik
	for (int i = 10; i > 1; --i)
	{
		imaks = 0;
		for (int j = 1; j < i; ++j)
		{
			if (X[j] > X[imaks])
			{
				imaks = j;
			}
		}
		temp = X[i-1];
		X[i-1] = X[imaks];
		X[imaks] = temp;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << X[i] << endl;
	}

	return 0;
}