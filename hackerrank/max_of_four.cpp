#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int array[4])
{
    int largest;
    int n=4;
    largest = array[0];
    for(int i = 1;i < n; i++) {
        if(largest < array[i])
            largest = array[i];
   }
   return largest;
}
int main(){
   int n=4;
   int num[4];
   int ans;

   for(int i = 0; i < n; i++) {
      cin>>num[i];
   }
   ans = max_of_four(num);
   cout << ans;

   return 0;
}
