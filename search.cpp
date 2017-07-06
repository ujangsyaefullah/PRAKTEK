#include <iostream>

using namespace std;

int binary_search(int array[],int size, int elemen);

int main() {   
	const int size = 10;   
	int array[size]={0,6,9,12,20,23,29,32,47,79};   
	
	cout<<"Isi dari array : "<<endl;
		for (int i=0; i<size; i++)
		cout << " " <<array [i];

	int elemen;
	int tanda;   
	cout<<"\n\n";
	cout <<"masukan data yang dicari : ";
	cin >> elemen;

	cout <<"\n\n";   
	tanda = binary_search(array,size,elemen);   
	if (tanda!=-1)
	{
		cout <<"data" <<elemen<<"ditemukan pada posisi : array"<<tanda<<"atau deret ke-"<<(tanda+1);	
	}
	else 
	{
		cout <<"\n data tersebut tidak ditemukan";
	}
}
	
int binary_search(int array[], int size, int elemen)
	{
	int start = 0;
	int end = size - 1;
	int middle;
	int posisi= -1;
	middle = (start + end) / 2;

	do
	{
		if (elemen<array[middle])
	end = middle -1;
	else if (elemen<array[middle])
	start = middle+1;
	middle=(start+end) / 2;	
	}

	while(start<=end && array[middle]!=elemen);   
if(array[middle]==elemen)    
posisi=middle;   
return posisi; 
	}

