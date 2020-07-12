#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

void printReverse(int array[], int size)
{
	int output[size];
	for(int j = 0; j <size; j++)
	{
		output[j] = array[size-j-1];
	}

	for(int i = 0; i< size; i++)
	{
		cout << output[i] << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++) {
		cin>>num[i];
	}
	printReverse(num, n);
	return 0;
}
