#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int sum = 0;
  rep(i, N) sum += a[i];

  if (sum % N != 0) {
    cout << -1 << endl;
    return 0;
  }

  int target = sum / N;
  int ans = 0;
  rep(i, N) {
    if (a[i] == target) continue;

    int add = 0;
    int people = a[i];
    for (int j = i + 1; j < N; j++) {
      people += a[j];
      add++;
      if (people == target * (j - i + 1)) {
        i = j;
        break;
      }
    }
    ans += add;
  }

  cout << ans << endl;
  return 0;
}