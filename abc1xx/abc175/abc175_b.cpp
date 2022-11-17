#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> L(N);
  rep(i, N) cin >> L[i];
  sort(L.begin(), L.end());

  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        if (L[i] != L[j] && L[j] != L[k] && L[k] != L[i] && L[i] + L[j] > L[k])
          ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}