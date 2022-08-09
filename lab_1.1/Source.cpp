#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a = 1000;
	float b, c, d;
	b = 0.0001;
	d = a - b;
	c = ((pow(d, 2)) - (pow(a, 2) - 2 * a * b)) / (pow(b, 2));
	cout << "(float)  C = " << c;
	cout << "\n------------------";
	int a1 = 1000;
	double b1, c1, d1;
	b1 = 0.0001;
	d1 = a1 - b1;
	c1 = ((pow(d1, 2)) - (pow(a1, 2) - 2 * a1 * b1)) / (pow(b1, 2));
	cout << "\n(double) C = " << c1;
	cout << "\n------------------";
	return 0;
}



