#include<bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    long long n;
    cin>>n;
    long long arr[n];
    for (long long i = 0; i < n; i++)cin>>arr[i];
    for (long long i = 2; i < 100; i++){
        for (long long j = 0; j < n; j++){
            if(gcd(arr[j],i)==1){
                cout<<i<<endl;
                return;
            }            
        }       
    }
    cout<<"-1\n";
}

int main()
{
    fastIO;
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}