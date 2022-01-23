#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll B;
  cin >> B;

  ll calc = 0;
  rep(i, N) calc += A[i];

  ll ans = (B / calc) * N;
  ll sum = (B / calc) * calc;

  int i = 0;
  while (sum <= B) {
    sum += A[i];
    i++;
  }

  cout << ans + i << endl;
  return 0;
}