#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  cout << 1 + (A < B) + (A < C) << endl;
  cout << 1 + (B < A) + (B < C) << endl;
  cout << 1 + (C < B) + (C < A) << endl;
  return 0;
}