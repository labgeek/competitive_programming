#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
	int i,j;
	cin >> i >> j;
	for (int a = 0; a < j; a++){
		if(i % 10 == 0){
			i /= 10;
		}
		else{
			i--;
		}
	}
	cout << i;
 
	return 0;
}
