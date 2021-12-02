#include <iostream>
#include <math.h>

using namespace std;

int g(int a, int c, int m) {
	return ((a - m + c) % 10);
}

int f(int a, int c, int m) {
	if (m >= 0 && m <= 9) {
		return m;
	}
	else {
		return g(a, m, c) * f(a, c, m - 1 - g(a, m, c)) + m;
	}
}



int main() {
	int a, c, m, rez;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "m = "; cin >> m;

	rez = f(a, c, m);
	cout << rez;
}

