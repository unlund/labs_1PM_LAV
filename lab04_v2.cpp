#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	//1
	unsigned int A;
	cout << "A: "; cin >> A;
	unsigned int B;
	cout << "B: "; cin >> B;
	unsigned int C;
	cout << "C: "; cin >> C;

	if (A % C == 0 && B % C == 0)
		cout << "(A + B) / C = " << (A + B) / C;
	else if (A % C == 0 && B % C != 0)
		cout << "A / C + B = " << A / C + B;
	else
		cout << "A - B - C = " << A - B - C;
	cout << "\n\n\n";
	//2
	unsigned int N;
	cout << "N: "; cin >> N;

	switch (N) {
	case(1):
		cout << "Понедельник";
		break;
	case(2):
		cout << "Вторник";
		break;
	case(3):
		cout << "Среда";
		break;
	case(4):
		cout << "Четверг";
		break;
	case(5):
		cout << "Пятница";
		break;
	case(6):
		cout << "Суббота";
		break;
	case(7):
		cout << "Воскресенье";
		break;
	default:
		cout << "Incorrect number";
	}
	cout << "\n\n\n";
	//3

	int x;
	cout << "x: "; cin >> x;
	x == 1 ? cout << "Positive number" : cout << "";
	x == -1 ? cout << "Negative number" : cout << "";
}
