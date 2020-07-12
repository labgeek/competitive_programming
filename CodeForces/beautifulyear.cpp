#include <iostream>

using namespace std;
int solve(int);


int main()
{
   int input;
   int ans;
   cin >> input;
   ans = solve(input);
   cout << ans << endl;

}

int solve(int year)
{
    while (true)
    {
        year += 1; //increment the years
        int firstnumber = year / 1000;
        int secondnumber = year / 100 % 10;
        int thirdnumber = year / 10 % 10;
        int fourthnumber = year % 10;
        if (firstnumber != secondnumber && firstnumber != thirdnumber &&
        		firstnumber != fourthnumber &&
				secondnumber != thirdnumber &&
				secondnumber != fourthnumber &&
				thirdnumber != fourthnumber)
        {
            break; //jump out since all digits are unique!
        }
    }
    return year;
}
