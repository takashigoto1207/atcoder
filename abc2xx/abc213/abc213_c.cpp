#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

vector<int> compress(vector<int> x) {
  int n = x.size();
  map<int, int> mp;
  rep(i, n) mp[x[i]] = 0;
  int id = 1;
  for (auto& p : mp) p.second = id++;
  rep(i, n) x[i] = mp[x[i]];
  return x;
}

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  A = compress(A);
  B = compress(B);

  rep(i, N) cout << A[i] << " " << B[i] << endl;
  return 0;
}