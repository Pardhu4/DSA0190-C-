#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char* str1 = "141";
	char* str2 = "3.14";
	int res1 = atoi(str1);
	int res2 = atoi(str2);
	cout << "atoi(" << str1 << ") is " << res1 << "\n";
	cout << "atoi(" << str2 << ") is " << res2 << "\n";
	return 0;
}

