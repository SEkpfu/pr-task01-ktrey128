#include<iostream>
#include <vector>
#include<string>


using namespace std;
int min_el(int n, vector<int> v) {
	int mi = v[0], nomer =0;
	for (int i = 0; i < n; ++i) {
		if (mi > v[i]) {
			mi = v[i];
			nomer = i + 1;
		}
	}
	return nomer;
 }
string max_el(int n, vector<int> v) {
	int ma = v[0], nomer;
	for (int i = 0; i < n; ++i) {
		if (ma < v[i]) {
			ma = v[i];
			nomer = i + 1;
		}
	}
	return to_string(ma) + " " + to_string(nomer);
}
int svoi_el(int n, vector<int> v, int el) {
	int kolvo =0;
	for (int i = 0; i < n; ++i) {
		if (v[i] > el)
			kolvo += 1;
	}
	return kolvo;
}
int summ(int n, vector<int> v) {
	int su = 0;
	for (int i = 0; i < n; ++i)
		su += v[i];
	return su;
}
int main() {
	int el, n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> el;
		v[i] = el;
	}
	cin >> el;
	cout << min_el(n, v) << endl << max_el(n, v) << endl << svoi_el(n, v, el) << endl << summ(n, v);




	return 0;
}

