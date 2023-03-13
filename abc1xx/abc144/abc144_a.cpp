#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A <= 0 || 10 <= A || B <= 0 || 10 <= B)
    cout << -1 << endl;
  else
    cout << A * B << endl;
  return 0;
}