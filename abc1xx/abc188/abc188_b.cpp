#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  ll calc = 0;
  rep(i, N) calc += A[i] * B[i];

  if (calc == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}