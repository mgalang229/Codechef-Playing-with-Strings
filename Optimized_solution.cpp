#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	string s, r;
	cin >> s >> r;
	sort(s.begin(), s.end());
	sort(r.begin(), r.end());
	if(s == r) cout << "YES";
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
