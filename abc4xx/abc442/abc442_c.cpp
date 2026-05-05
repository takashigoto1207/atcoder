#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  map<int, ll> mp;
  int A, B;
  rep(i, M) {
    cin >> A >> B;
    mp[A]++;
    mp[B]++;
  }

  rep(i, N) cout << (N - mp[i + 1] - 1) * (N - mp[i + 1] - 2) *
                        (N - mp[i + 1] - 3) / 6
                 << " ";
  cout << endl;
  return 0;
}