#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, D, T;
  cin >> N;

  map<int, int> mpd, mpt;
  rep(i, N) cin >> D, mpd[D]++;
  cin >> M;
  rep(i, M) cin >> T, mpt[T]++;

  for (auto x : mpt) {
    if (mpd[x.first] < x.second) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}