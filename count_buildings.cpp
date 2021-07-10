#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		int h[n], k[n];
		for (int i = 0; i < n; i++)
			cin >> h[i];
		for (int i = 0; i < n; i++)
			cin >> k[i];
		int c = 1;
		int mx = h[0];
		for (int i = 1; i < n; i++)
		{
			if (mx <= h[i] && i <= k[i])
				c++;
			if (mx < h[i])
				mx = h[i];
		}
		cout << c << endl;
	}
}
