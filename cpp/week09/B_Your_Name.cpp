#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s, t;
    cin >> n >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}