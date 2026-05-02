#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, K, L;
  cin >> A >> B >> K >> L;

  if (A * L <= B)
    cout << A * K << endl;
  else
    cout << min(B * (K / L) + A * (K % L), B * (K / L + min((ll)1, K % L)))
         << endl;
  return 0;
}