#include<iostream>
using namespace std;

double zp(int& h, int& st, double& pr, double n_st = 0.13){
	int ob_zp = h * st;
	int c_pr =  ob_zp + ob_zp * pr/100;
	int nal =  n_st / 100 * c_pr;
	cout << ob_zp << " " << c_pr << " " << nal;
}
int main() {
	int h, st, pr;
	cin >> h >> st >> pr;
	zp(h, st, pr);

	return 0;
}