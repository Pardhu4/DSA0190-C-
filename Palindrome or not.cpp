#include<iostream>
using namespace std;
int main(){
	int rem, rev, n, m;
	cout << "Enter a Number = ";
	cin >> n;
	m = n;
	while ( m > 0 ){
		rem = m % 10;
		rev = rev * 10 + rem;
		m = m / 10;
	}
	if ( n == rev ){
		cout << n <<" is Palindrome";
	}
	else{
		cout << n << " 1is not Palindrome";
	}
}
