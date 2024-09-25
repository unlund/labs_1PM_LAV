#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    setlocale(0, "");
    unsigned int x;
    cout << "X: "; cin >> x;
    bitset<32> binx(x);
    cout << binx << "\n";
    unsigned int i;
    cout << "i: "; cin >> i;

    unsigned int savex = (x << 32 - (i - 1))>>32 - (i-1);

    unsigned int res = ((x >> i) << i) + savex;
    bitset<32> binr(res);
    cout << res << "\n" << binr;
}
