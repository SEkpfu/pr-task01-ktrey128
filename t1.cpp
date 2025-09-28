#include<iostream>
using namespace std;

int main() {
	int h, st, pr;
	cin >> h >> st >> pr;
	int ob_zp = h * st;
	cout << ob_zp + ob_zp * pr / 100 << endl;

	return 0;
}