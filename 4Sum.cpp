#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fourelements(int A[], int n, int X)
{
	for (int i = 0; i < n - 3; i++){
		for (int j = i + 1; j < n - 2; j++){
			for (int k = j + 1; k < n - 1; k++){
				for (int l = k + 1; l < n; l++)
					if (A[i] + A[j] + A[k] + A[l] == X)
						cout << A[i] <<", " << A[j] << ", " << A[k] << ", " << A[l];
			}
		}
	}
}

int main()
{
	int A[] = {10, 20, 30, 40, 1, 2};
	int n = sizeof(A) / sizeof(A[0]);
	int X = 91;
	fourelements (A, n, X);
	return 0;
}
