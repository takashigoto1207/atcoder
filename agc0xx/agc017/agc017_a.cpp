#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, P, A;
  cin >> N >> P;

  map<int, int> mp;
  rep(i, N) cin >> A, mp[A % 2]++;
  if (mp[1] == 0) {
    if (P == 1)
      cout << 0 << endl;
    else
      cout << (1LL << N) << endl;
  } else
    cout << (1LL << (N - 1)) << endl;
  return 0;
}