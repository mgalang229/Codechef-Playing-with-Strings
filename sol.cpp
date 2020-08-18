#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	char s[n], r[n];
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	for(int i = 0; i < n; ++i) {
		cin >> r[i];
	}
	int n1 = 0, n2 = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == '1') n1++;
		else n2++;
	}
	int n3 = 0, n4 = 0;
	for(int i = 0; i < n; ++i) {
		if(r[i] == '1') n3++;
		else n4++;
	}
	if(n1 == n3 && n2 == n4) {
		cout << "YES";
	}
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
