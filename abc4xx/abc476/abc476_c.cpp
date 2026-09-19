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

  int a = 0, b = 0, c = 0;
  vector<int> ans;
  rep(i, N) {
    if (A[i] > a)
      c = b, b = a, a = A[i];
    else if (A[i] > b)
      c = b, b = A[i];
    else if (A[i] > c)
      c = A[i];

    if (i >= 2) ans.push_back(c);
  }

  for (auto x : ans) cout << x << endl;
  return 0;
}