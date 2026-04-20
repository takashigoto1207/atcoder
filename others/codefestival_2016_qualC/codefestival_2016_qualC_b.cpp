#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K, T;
  cin >> K >> T;

  vector<int> a(T);
  int maxa = 0;
  int sum = 0;
  rep(i, T) {
    cin >> a[i];
    maxa = max(a[i], maxa);
    sum += a[i];
  }

  sum -= maxa;
  cout << max(0, maxa - sum - 1) << endl;
  return 0;
}