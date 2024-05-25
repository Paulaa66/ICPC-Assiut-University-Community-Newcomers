#include<iomanip>
#include <iostream>
using namespace std;

int main() {
	cout << fixed << setprecision(9);
	double A, R;
	const double pi = 3.141592653;
	cin >> R;
	A = pi * (R * R);
	cout << A << endl;
	return 0;
}