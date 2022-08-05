#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int n;
	string s;
	cin >> n >> s;
	int cnt = 0;
	int box = n - 11 + 1;
	for (int i = 0; i < box; i++) {
		cnt += (s[i] == '8');
	}
	int p_total = box / 2;
	if (cnt <= p_total) {
		cout << "NO\n";
		return;
	}
	int v_total = (box % 2 ? p_total : p_total + 1);
	int eight_left = cnt - p_total;
	int rem = box - p_total - v_total;
	if ((rem > 1) || (rem == 1 && eight_left > 0)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	//cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
