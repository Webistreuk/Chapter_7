#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    double a, b, c, d;
    std::cout << "Введите 4 числа: ";
    std::cin >> a >> b >> c >> d;
    double arr[2][2] = { { a, b },{ c, d } };
    std::cout << "Массив:\n";
    std::cout << "arr[-1][-1]: " << arr[-1][-1] << "\n";
    std::cout << "arr[3][3]: " << arr[3][3] << "\n";
    std::cout << "arr[0] " << arr[0][1] << "\n";
    std::cout << "arr[1] " << arr[1][1] << "\n";
}