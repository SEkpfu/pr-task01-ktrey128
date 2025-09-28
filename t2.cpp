#include<iostream>
using namespace std;

double zp(int h, int st, double pr){
	int ob_zp = h * st;
	return ob_zp + ob_zp * pr/100;
}
double nalog(double zp_b) {
	int n_st;
	cin >> n_st;
	return n_st / 100 * zp_b;
 }
double na_ruki(int h, int st, double pr) {
	double zp_bez_nal = zp(h, st, pr);
	return zp_bez_nal - nalog(zp_bez_nal);
}
int main() {
	int h, st, pr;
	cin >> h >> st >> pr;
	cout << na_ruki(h, st, pr)  << endl;

	return 0;
}