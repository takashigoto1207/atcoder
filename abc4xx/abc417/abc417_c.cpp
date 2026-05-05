#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  map<int, ll> mpi, mpj;
  rep(i, N) mpi[A[i] + i + 1]++;
  rep(j, N) mpj[j - A[j] + 1]++;

  ll ans = 0;
  for (auto x : mpi) ans += x.second * mpj[x.first];
  cout << ans << endl;
  return 0;
}