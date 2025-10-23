#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2;
    cout << "Введите x1 ";
    cin >> x1;
    cout << "Введите x2 ";
    cin >> x2;
    cout << "Введите y1 ";
    cin >> y1;
    cout << "Введите y2 ";
    cin >> y2;
    double U = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Результат " << U << endl;
}
