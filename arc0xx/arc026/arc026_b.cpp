#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll calc = 0;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) calc += i + N / i;
    if (i * i == N) calc -= N;
  }

  if (calc < 2 * N)
    cout << "Deficient" << endl;
  else if (calc > 2 * N)
    cout << "Abundant" << endl;
  else
    cout << "Perfect" << endl;
  return 0;
}