#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    srand(static_cast<int>(time(0)));

    const int rows = 7;
    const int columns = 5;

    int select_index_string = 0;
    int target_num = 0;

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

    std::cout << "Введите индекс строки, которую вывести отдельно (0-" << (rows - 1) << "): ";
    std::cin >> select_index_string;

    if (select_index_string < 0 || select_index_string >= rows) {
        std::cout << "Ошибка: индекс строки вне диапазона\n";
    }

    std::cout << "Строка под индексом " << select_index_string << ":\n";
    for (int j = 0; j < columns; ++j) {
        std::cout << arr[select_index_string][j] << "\t";
    }
    std::cout << "\n\n";

    std::cout << "Введите значение, которое надо найти во всём массиве: ";
    std::cin >> target_num;

    bool found = false;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (arr[i][j] == target_num) {
                std::cout << "Найдено значение " << target_num << " в позиции [" << i << "][" << j << "]\n";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "Значение " << target_num << " не найдено в массиве.\n";
    }
}