#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> a(N), b(N);
  rep(i, N) cin >> a[i];

  vector<vector<int>> tmp(K);
  rep(i, N) tmp[i % K].emplace_back(a[i]);
  rep(i, K) sort(tmp[i].begin(), tmp[i].end());
  rep(i, K) rep(j, tmp[i].size()) b[j * K + i] = tmp[i][j];

  sort(a.begin(), a.end());
  if (a == b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}