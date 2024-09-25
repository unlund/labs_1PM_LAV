#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    unsigned int a;
    unsigned int h;
    cout << "Основание: "; cin >> a;
    cout << "Высота: "; cin >> h;

    cout << "Площадь = " << (h * a) / 2;
}
