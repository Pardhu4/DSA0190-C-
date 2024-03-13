#include <iostream>

#define MAX_SIZE 100

void _printparenthesis(int pos, int n, int open, int close);

void printparenthesis(int n)
{
	if (n > 0)
		_printparenthesis(0, n, 0, 0);
	return;
}

void _printparenthesis(int pos, int n, int open, int close)
{
	static char str[MAX_SIZE];

	if (close == n) {
		std::cout << str << std::endl;
		return;
	}
	else {
		if (open > close) {
			str[pos] = '}';
			_printparenthesis(pos + 1, n, open, close + 1);
		}

		if (open < n) {
			str[pos] = '{';
			_printparenthesis(pos + 1, n, open + 1, close);
		}
	}
}
int main()
{
	int n = 3;
	printparenthesis(n);
	return 0;
}

