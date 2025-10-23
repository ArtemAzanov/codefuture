#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double r;
    double p = 3.14;
    cout << "Введите радиус " << endl;
    cin >> r;
    double V = (4 / 3) * p * pow(r, 3);
    cout << "Ответ " << V;
}