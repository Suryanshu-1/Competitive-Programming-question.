#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        vi div;
        for (int d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                div.push_back(d);
                if (d != n / d) div.push_back(n / d);
            }
        }

        sort(div.rbegin(), div.rend());

        for (int d : div) {
            for (int i = 1; i <= n; i++) {
                if (__gcd(i,n) == d) {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
