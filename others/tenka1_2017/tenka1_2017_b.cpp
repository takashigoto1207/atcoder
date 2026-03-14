#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A, B, ax = 0, bx;
  rep(i, N) {
    cin >> A >> B;
    if (ax < A) ax = A, bx = B;
  }
  cout << ax + bx << endl;
  return 0;
}