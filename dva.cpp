#include <iostream>
//#include <string>
using namespace std;

int main()
{
	//1
	setlocale(0, "");
	float A[] = { -10, -9, -8, 1, 12, 3, 5, -4, 4, -6, 2, 9, 20, 31 };
	float max = A[0];
	float s = 0;
	int index = 0;
	int res_index = 0;;
	for (float i : A)
	{
		if (i >= -7 && i <= 19) {
			s += i;
			if (max <= i) {
				max = i;
				res_index = index;
			}
		}
		index++;
	}
	cout << "sum: " << s << "\n";
	cout << "max: " << max << " by index: " << res_index;
	cout << "\n\n\n";
	//2
	unsigned int N = 19289732;
	int sum = 0;
	/*for (char c : to_string(N)) {
		sum += (int)(c - '0');
	}*/
	for (int i = 0; ; i++)
	{
		sum += (N % 10);
		N = N / 10;
		if (N == 0)
			break;
	}

	while (N)
	{
		sum += N % 10;
		N /= 10;
	}

	cout << "sum: " << sum;
}
