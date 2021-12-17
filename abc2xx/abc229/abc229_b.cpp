#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, B;
  cin >> A >> B;

  while (A > 0 && B > 0) {
    if ((A % 10) + (B % 10) >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
    A /= 10;
    B /= 10;
  }
  cout << "Easy" << endl;
  return 0;
}