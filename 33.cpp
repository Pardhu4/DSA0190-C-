#include <iostream>
#include <vector>
std::vector<std::vector<int> > generateSpiralMatrix(int n) {
    std::vector<std::vector<int> > spiral(n, std::vector<int>(n, 0)); // Add space between > >
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i)
            spiral[top][i] = num++;
        ++top;
        for (int i = top; i <= bottom; ++i)
            spiral[i][right] = num++;
        --right;
        for (int i = right; i >= left; --i)
            spiral[bottom][i] = num++;
        --bottom;
        for (int i = bottom; i >= top; --i)
            spiral[i][left] = num++;
        ++left;
    }
    return spiral;
}
int main() {
    int n;
    std::cout << "Enter the size of the spiral matrix: ";
    std::cin >> n;

    std::vector<std::vector<int> > spiral = generateSpiralMatrix(n); // Add space between > >

    std::cout << "The spiral matrix is:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << spiral[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}

