#include <iostream> 
using namespace std; 

// Функция для вычисления a^m
double power(double a, int m) {
    double result = 1;
    // Обработка положительной степени
    if (m > 0) {
        for (int i = 0; i < m; i++) {
            result *= a; // Умножаю a на себя m раз
        }
        return result;
    }
    // Обработка отрицательной степени
    else if (m < 0) {
        for (int i = 0; i < -m; i++) {
            result *= a; 
        }
        return 1 / result; // Возвращаю 1 / (a^m)
    }
    return 1; // любое число в степени 0 равно 1
}

int main() {
    int a, b; 
    int m, n;

    // Цикл для ввода a
    while (true) {
        cout << "Введите a (a <= 40000): ";
        cin >> a;
        if (a <= 40000) break;
        cout << "Некорректный ввод. Пожалуйста, введите a снова." << endl;
    }

    // Цикл для ввода b
    while (true) {
        cout << "Введите b (b <= 40000): ";
        cin >> b;
        if (b <= 40000) break;
        cout << "Некорректный ввод. Пожалуйста, введите b снова." << endl;
    }

    // Цикл для ввода m
    while (true) {
        cout << "Введите m (m <= 10): ";
        cin >> m;
        if (m <= 10) break;
        cout << "Некорректный ввод. Пожалуйста, введите m снова." << endl;
    }

    // Цикл для ввода n
    while (true) {
        cout << "Введите n (n <= 10): ";
        cin >> n;
        if (n <= 10) break;
        cout << "Некорректный ввод. Пожалуйста, введите n снова." << endl;
    }

    // Рассчитываю a^m и b^n
    double a_power_m = power(a, m);
    double b_power_n = power(b, n);

    if (m < 0) {
        cout << "Результат a^m: 1/" << a << "^" << -m << " = " << a_power_m << endl;
    }
    else {
        cout << "Результат a^m: " << a_power_m << endl;
    }

    if (n < 0) {
        cout << "Результат b^n: 1/" << b << "^" << -n << " = " << b_power_n << endl;
    }
    else {
        cout << "Результат b^n: " << b_power_n << endl;
    }

    // Сравниваю и вывожу результат
    if (a_power_m > b_power_n) {
        cout << a_power_m << " больше " << b_power_n << " на " << (a_power_m - b_power_n) << endl;
    }
    else if (a_power_m < b_power_n) {
        cout << b_power_n << " больше " << a_power_m << " на " << (b_power_n - a_power_m) << endl;
    }
    else {
        cout << "a^m и b^n равны (" << a_power_m << ")" << endl;
    }

    return 0;
}
