#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, D;
  cin >> A >> B >> D;

  int calc = A;
  cout << A << endl;
  while (A < B) {
    A += D;
    cout << " " << A;
  }
  cout << endl;
  return 0;
}