#include<iostream>
using namespace std;

int main() {
	int h, st, h2, st2, zp, zp2;
	cin << h << st << h2 << st2;
	zp = h * st;
	zp2 = h2 * st2;
	if (zp > zp2)
		cout >> 1;
	else
		cout >> 2;
	cout << endl << zp + zp2;

	return 0;
}