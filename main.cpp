#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if(!(cin >> n >> m)) return 0;
    int target = n - m; // remaining apples when m have been eaten
    vector<double> E(n+1, 0.0);
    // E[k] = 0 for k <= target
    for(int k = target + 1; k <= n; ++k) {
        double sum = 0.0;
        for(int j = target + 1; j <= k-1; ++j) {
            sum += E[j];
        }
        E[k] = 1.0 + sum / k;
    }
    cout.setf(ios::fixed);
    cout << setprecision(2) << E[n] << "\n";
    return 0;
}
