#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  int ans = 0;
  rep(i, N) if (i == B[A[i] - 1] - 1) ans++;
  if (ans == N)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}