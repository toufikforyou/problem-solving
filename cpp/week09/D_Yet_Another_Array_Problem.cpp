#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

void solve() {
    int n;
    cin >> n;
    vector<int64> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int64 x = 2; x <= 100; x++) {
        for (int i = 0; i < n; i++) {
            if (gcd(a[i], x) == 1) {
                cout << x << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
