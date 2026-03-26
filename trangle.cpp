#include <iostream>
#include <cmath> //для sqrt()

//комментарий для создания конфликта при слиянии
//...

using namespace std;

// Проверка существования треугольника
bool existence(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Вычисление периметра
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Вычисление площади по формуле Герона
double HeronArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;          // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Проверка, является ли треугольник равнобедренным
bool isosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (c == a);
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;

    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;

    if (existence(a, b, c)) {
        double P = perimeter(a, b, c);
        double S = HeronArea(a, b, c);
        bool iso = isosceles(a, b, c);

        cout << "Периметр: " << P << endl;
        cout << "Площадь: " << S << endl;
        cout << (iso ? "Треугольник равнобедренный." : "Треугольник не равнобедренный.") << endl;
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    return 0;
}

