#include <iostream> 
using namespace std; 

// �㭪�� ��� ���᫥��� a^m
double power(double a, double m) {
    double result = 1;
    // ��ࠡ�⪠ ������⥫쭮� �⥯���
    if (m > 0) {
        for (int i = 0; i < m; i++) {
            result *= a; // ������� a �� ᥡ� m ࠧ
        }
        return result;
    }
    // ��ࠡ�⪠ ����⥫쭮� �⥯���
    else if (m < 0) {
        for (int i = 0; i < -m; i++) {
            result *= a; 
        }
        return 1 / result; // ������� 1 / (a^m)
    }
    return 1; // �� �᫮ � �⥯��� 0 ࠢ�� 1
}

int main() {
    double a, b;
    double m, n;

    // ���� ��� ����� a
    while (true) {
        cout << "������ a (a <= 40000): ";
        cin >> a;
        if (cin.good() && a <= 40000) {
            break; 
        }
        else {
            cin.clear(); // ����뢠� 䫠� �訡��
            cin.ignore(10000, '\n'); // �������� ���ࠢ���� ����
            cout << "�����४�� ����. ��������, ������ a ᭮��." << endl;
        }
    }

    // ���� ��� ����� b
    while (true) {
        cout << "������ b (b <= 40000): ";
        cin >> b;
        if (cin.good() && b <= 40000) {
            break; 
        }
        else {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "�����४�� ����. ��������, ������ b ᭮��." << endl;
        }
    }

    // ���� ��� ����� m
    while (true) {
        cout << "������ m (m <= 10): ";
        cin >> m;
        if (cin.good() && m <= 10) {
            break; 
        }
        else {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "�����४�� ����. ��������, ������ m ᭮��." << endl;
        }
    }

    // ���� ��� ����� n
    while (true) {
        cout << "������ n (n <= 10): ";
        cin >> n;
        if (cin.good() && n <= 10) {
            break;
        }
        else {
            cin.clear(); 
            cin.ignore(10000, '\n'); 
            cout << "�����४�� ����. ��������, ������ n ᭮��." << endl;
        }
    }

    // ������뢠� a^m � b^n
    double a_power_m = power(a, m);
    double b_power_n = power(b, n);

    if (m < 0) {
        cout << "������� a^m: 1/" << a << "^" << -m << " = " << a_power_m << endl;
    }
    else {
        cout << "������� a^m: " << a_power_m << endl;
    }

    if (n < 0) {
        cout << "������� b^n: 1/" << b << "^" << -n << " = " << b_power_n << endl;
    }
    else {
        cout << "������� b^n: " << b_power_n << endl;
    }

    // �ࠢ����� � �뢮�� १����
    if (a_power_m > b_power_n) {
        cout << a_power_m << " ����� " << b_power_n << " �� " << (a_power_m - b_power_n) << endl;
    }
    else if (a_power_m < b_power_n) {
        cout << b_power_n << " ����� " << a_power_m << " �� " << (b_power_n - a_power_m) << endl;
    }
    else {
        cout << "a^m � b^n ࠢ�� (" << a_power_m << ")" << endl;
    }

    return 0;
}
