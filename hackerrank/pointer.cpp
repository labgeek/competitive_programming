#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{

	int sum = *a+*b;
	int del = abs(*a-*b);
	cout << sum << endl;
	cout << del << endl;

	return;

}

int main()
{
	int a,b;
	int *pa = &a;
	int *pb = &b;
	cin >> a;
	cin >> b;
	update(pa, pb);
	return 0;
}
