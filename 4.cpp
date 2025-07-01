#include <iostream>
#include <vector>
using namespace std;

// процедура для вывода матрицы (не возвращает результат)
void printMatrix(const vector<vector<int>>& matrix) {
    cout << "Исходная матрица:" << endl;
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << "\t";
        }
        cout << endl;
    }
}

// функция для вычисления сумм положительных элементов каждого столбца
vector<int> calculateColumnSums(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> columnSums(cols, 0); // Инициализируем нулями

    for (int col = 0; col < cols; ++col) {
        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col] > 0) {
                columnSums[col] += matrix[row][col];
            }
        }
    }
    return columnSums;
}

int main() {
    // Исходная матрица (3x4)
    vector<vector<int>> matrix = {
        {1, -2, 3, 4},
        {-5, 6, -7, 8},
        {9, 10, -11, 12}
    };

    // процедура
    printMatrix(matrix);

    // функция
    vector<int> sums = calculateColumnSums(matrix);
    cout << "\nСуммы положительных элементов по столбцам:" << endl;
    for (int sum : sums) {
        cout << sum << "\t";
    }
    cout << endl;

    return 0;
}
