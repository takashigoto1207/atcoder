#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, K, S, T;
  cin >> A >> B >> C >> K >> S >> T;

  if (S + T < K)
    cout << A * S + B * T << endl;
  else
    cout << A * S + B * T - C * (S + T) << endl;
  return 0;
}