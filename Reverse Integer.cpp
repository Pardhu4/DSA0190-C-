#include<iostream>
using namespace std;

int main(){
	int rem, rev, n, m;
	cout << "Enter a Number = ";
	cin >> m;
	cout << "Reversed Number = ";
	while ( m > 0 ){
		rem = m % 10;
		cout << rem;
		m = m / 10;
	}
	return 0;
}
