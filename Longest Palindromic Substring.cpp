#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void substr(string str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		cout << str[i];
}
int longestpal(string str)
{
	int n = str.size();
	int maxLength = 1, start = 0;
	for (int i = 0; i < str.length(); i++) {
		for (int j = i; j < str.length(); j++) {
			int flag = 1;
			for (int k = 0; k < (j - i + 1) / 2; k++)
				if (str[i + k] != str[j - k])
					flag = 0;

			if (flag && (j - i + 1) > maxLength) {
				start = i;
				maxLength = j - i + 1;
			}
		}
	}
	cout << "Longest palindrome substring is: ";
	substr(str, start, start + maxLength - 1);
	return maxLength;
}
int main()
{
	string str = "eeekkreeefeeeddeeeeeeee";
	cout << "\nLength is: " << longestpal(str);
	return 0;
}

