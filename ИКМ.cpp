#include <iostream> 
using namespace std; 
int main() {
    int a, b; 
    int m, n;

    // Цикл для ввода a
    while (true) {
        cout << "Введите a (a <= 40000): "; 
        cin >> a; 
        if (a >= 0 && a <= 40000) break; 
        cout << "Некорректный ввод. Пожалуйста, введите a снова." << endl;
    }

    // Цикл для ввода b
    while (true) {
        cout << "Введите b (b <= 40000): "; 
        cin >> b; 
        if (b >= 0 && b <= 40000) break;
        cout << "Некорректный ввод. Пожалуйста, введите b снова." << endl; 
    }

    // Цикл для ввода m
    while (true) {
        cout << "Введите m (m <= 10): "; 
        cin >> m; 
        if (m >= 0 && m <= 10) break; 
        cout << "Некорректный ввод. Пожалуйста, введите m снова." << endl;
    }

    // Цикл для ввода n
    while (true) {
        cout << "Введите n (n <= 10): "; 
        cin >> n; 
        if (n >= 0 && n <= 10) break; 
        cout << "Некорректный ввод. Пожалуйста, введите n снова." << endl;
    }