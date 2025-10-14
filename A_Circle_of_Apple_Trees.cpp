#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<ll, int> mpp;
        for (ll i = 0; i < n; ++i) {
            mpp[a[i]]++;
        }

        int count = 0;
        for (auto & it:mpp){
            if (it.second > 0) {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}