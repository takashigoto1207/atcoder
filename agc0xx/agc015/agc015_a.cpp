#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  if (N == 1) {
    if (A == B)
      cout << "1" << endl;
    else
      cout << "0" << endl;
    return 0;
  }
  if (A > B) {
    cout << "0" << endl;
    return 0;
  }

  cout << (B - A) * (N - 2) + 1 << endl;
  return 0;
}