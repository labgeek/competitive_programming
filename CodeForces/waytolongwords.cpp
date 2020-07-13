#include <iostream>
using namespace std;
int a,b,n,i;
string str,st;

int main()
{
	cin>>n;
	for(i=0; i<n; i++){
		cin>>str;
		a=str.size();
		if(a>10)
			cout<<str[0]<<a-2<<str[a-1]<<endl;
		else
			cout<<str<<endl;

	}
	return 0;
}
