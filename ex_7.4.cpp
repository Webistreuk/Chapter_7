#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    srand(static_cast<int>(time(0)));

    const int rows = 7;
    const int columns = 7;
    int arr[rows][columns];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            arr[i][j] = rand() % 10;
        }
    }

    std::cout << "Массив:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    int min_val = arr[0][0];
    int max_val = arr[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (arr[i][j] < min_val) {
                min_val = arr[i][j];
            }
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
    }

    std::cout << "Минимальное число: " << min_val << "\n";
    std::cout << "Максимальное число: " << max_val << "\n\n";

    int input_row, input_col;
    std::cout << "Введите строку и колонку (индексы от 0 до " << rows - 1 << "): ";
    std::cin >> input_row >> input_col;

    if (input_row >= 0 && input_row < rows && input_col >= 0 && input_col < columns) {
        int value = arr[input_row][input_col];
        std::cout << "Значение по координатам (" << input_row << ", " << input_col << ") = " << value << "\n";

        arr[input_row][input_col] *= 2;

        std::cout << "Обновлённый массив:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                std::cout << arr[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }
    else {
        std::cout << "Введены некорректные координаты.\n";
    }
}