#include <iostream>
using namespace std;

int main () {

	int L [10], x, k, j, i;

	/*menaik*/
	for (int l = 1; l <= 10 ; l++)
	{
		L [l] = l;
	}

	for (int l = 1; l <= 10 ; l++)
	{
		cout << L [l] << endl;
	}

	cin >> x;

	i = 1;
	j = 10;
	k = (i + j) / 2;

	while (L[k] != x && k != 0) {
		if (L [k] > x)
		{			
			j = k - 1;
			k = (i + j) / 2;			
		} else if (L[k] < x)
		{	
			i = k + 1;
			k = (i + j) / 2;			
		}
	}

		if (x > 10) {
			cout << "Data tidak ditemukan";
		} else if (L [k] == x){
			cout << "Data ditemukan di indeks " << L[k];
		} 
		
	return 0;
}