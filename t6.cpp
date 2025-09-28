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
	string f1, f2;
	int h, st, pr, zp1, zp2, nal;
	cin >>f1 >> h >> st >> pr;
	zp1 = na_ruki(h, st, pr);
	nal = nalog(zp(h, st, pr));
	cin >> f2 >> h >> st >> pr;
	zp2 = na_ruki(h, st, pr);
	if (zp1 < 1000) 
		cout << f1 << endl;
	if (zp2 < 1000)
		cout << f2 << endl;
	if (nal >  50)
		cout << f1[0] << "-" << f1[19] << endl;
	if (nalog(zp(h, st, pr)) > 50)
		cout << f2[0] << "-" << f2[19] << endl;




	return 0;
}