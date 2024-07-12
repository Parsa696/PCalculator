#include <iostream>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "تقسیم بر صفر مجاز نیست." << endl;
        return 0;
    }
}

int modulus(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        cout << "تقسیم بر صفر مجاز نیست." << endl;
        return 0;
    }
}

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / power(base, -exponent);
}

void calculate() {
    double num1, num2;
    char op;

    cout << "عملگر و دو عدد را وارد کنید (مثال: 2 + 3): ";
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            cout << "نتیجه: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "نتیجه: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "نتیجه: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "نتیجه: " << divide(num1, num2) << endl;
            break;
        case '%':
            cout << "نتیجه: " << modulus(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            break;
        case '^':
            cout << "نتیجه: " << power(num1, static_cast<int>(num2)) << endl;
            break;
        default:
            cout << "عملگر نامعتبر است." << endl;
    }
}

int main() {
    char choice;
    do {
        calculate();
        cout << "آیا می‌خواهید محاسبه دیگری انجام دهید؟ (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
