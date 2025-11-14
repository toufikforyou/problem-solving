#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    vector<long long> arr(n + 2);

    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<long long> pref(n + 2), suff(n + 3);

    pref[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        pref[i] = max(pref[i - 1], arr[i]);
    };

    suff[n] = arr[n];
    for (int i = n - 1; i >= 1; i--) {
        suff[i] = min(suff[i + 1], arr[i]);
    };

    int ans = -1;

    for (int i = 1; i <= n; i++) {
        bool ok1 = (i == 1 || arr[i] > pref[i - 1]);
        bool ok2 = (i == n || arr[i] < suff[i + 1]);
        if (ok1 && ok2) {
            ans = i;
            break;
        }
    }

    if (ans == -1) cout << "Humanity is doomed!" << endl;
    else cout << ans << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, c = 1;
    cin >> t;

    while (t--) {
        cout << "Case " << c << ": ";
        c++;
        solve();
    }

    return 0;
}