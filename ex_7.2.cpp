#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    srand(static_cast<int>(time(0)));

    const int rows = 5;
    const int columns = 8;
    int arr[rows][columns];

    for (int j = 0; j < rows; ++j) {
        for (int k = 0; k < columns; ++k) {
            arr[j][k] = rand() % 10;
        }
    }

    std::cout << "Массив:\n";
    for (int j = 0; j < rows; ++j) {
        for (int k = 0; k < columns; ++k) {
            std::cout << arr[j][k] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    int min_val = arr[0][0];
    int max_val = arr[0][0];

    for (int j = 0; j < rows; ++j) {
        for (int k = 0; k < columns; ++k) {
            if (arr[j][k] < min_val) {
                min_val = arr[j][k];
            }
            if (arr[j][k] > max_val) {
                max_val = arr[j][k];
            }
        }
    }

    std::cout << "Минимальное число: " << min_val << "\n";
    std::cout << "Максимальное число: " << max_val << "\n";
}