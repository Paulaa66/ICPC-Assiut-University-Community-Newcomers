#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float A, B;
	cin >> A >> B;
	float result = A / B;
	cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
	cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
	cout << "round " << A << " / " << B << " = " << round(result);
	return 0;
}