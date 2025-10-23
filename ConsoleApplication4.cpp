#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 5;
    double h = 10;
    cout << "Введите a ";
    cin >> a;
    cout << "Введите h ";
    cin >> h;
    double S = 0.5 * a * h;
    cout << "Ответ: " << S;
}
