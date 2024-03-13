#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Fill top row
        for (int i = left; i <= right; ++i)
            matrix[top][i] = num++;

        // Fill right column
        for (int i = top + 1; i <= bottom; ++i)
            matrix[i][right] = num++;

        // Fill bottom row if necessary
        if (top < bottom) {
            for (int i = right - 1; i >= left; --i)
                matrix[bottom][i] = num++;
        }

        // Fill left column if necessary
        if (left < right) {
            for (int i = bottom - 1; i > top; --i)
                matrix[i][left] = num++;
        }

        // Update boundaries
        top++;
        bottom--;
        left++;
        right--;
    }

    return matrix;
}

int main() {
    int n = 4; // Change the value of n as needed
    vector<vector<int>> result = generateMatrix(n);

    cout << "Spiral Matrix II for n = " << n << ":" << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

