#include<iostream>
using namespace std;
int main()
{
    int digit,n;
    cout << "Enter a number:";
    cin >> n;
    while(n!=0)
    {
	
    digit=n%10;
    n=n/10;
	}
    cout << digit;
}
