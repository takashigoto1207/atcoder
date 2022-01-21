#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll conv(string s, ll k) {
  ll calc = 0;
  for (char x : s) {
    calc *= k;
    calc += x - '0';
  }
  return calc;
}

int main() {
  ll K;
  string A, B;
  cin >> K >> A >> B;
  cout << conv(A, K) * conv(B, K) << endl;
  return 0;
}