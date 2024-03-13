#include <iostream>
using namespace std;
long long noofways(long long n)
{
	return 2 + 2 * (n - 1) + (n - 2) * (n - 1);
}
int main()
{
	int n = 4;
	cout << noofways(n);
	return 0;
}

