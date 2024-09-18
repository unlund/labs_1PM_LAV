#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "int 2 байта 0 ... 2 ^ 32 - 1\n";
    cout << "unsigned int 2 байта -2^31...2^31-1\n";
    cout << "float 4 байта (+-1.5)*10^(-45)...(+-3.4)*10^38\n";
    cout << "double 8 байта (+-5)*10^(-324)...(+-1.7)*10^308\n";
    cout << "bool 1 байт 1/0\n";
    cout << "char 1 байт\n";
    cout << "\n\n";
    cout << "int: -10 + 5 = " << (-10 + 5) << endl;
    cout << "insigned int: 5 + 5 = " << (5 + 5) << endl;
    cout << "float: 3.2 + 6.1 = " << (3.2 + 6.1) << endl;
    cout << "double: 3.216341982478 + 9.07234127341927491 = " << (3.216341982478 + 9.07234127341927491) << endl;
    cout << "bool: true + false = " << (true + false) << endl;
    cout << "char: 'a' + 'b' = " << (char)('a' + 'b') << endl;
}
