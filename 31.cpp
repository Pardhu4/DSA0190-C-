#include <iostream>
double power(double x, int n) {
    if (n == 0)
        return 1.0;
    else if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    
    double result = 1.0;
    while (n > 0) {
        if (n % 2 == 1)
            result *= x;
        x *= x;
        n /= 2;
    }
    return result;
}
int main() {
    double x;
    int n;
    std::cout << "Enter the base (x): ";
    std::cin >> x;
    std::cout << "Enter the exponent (n): ";
    std::cin >> n;
    double result = power(x, n);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

