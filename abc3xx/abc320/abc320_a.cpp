#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B;
  cin >> A >> B;

  cout << static_cast<int>(pow(A, B) + pow(B, A)) << endl;
  return 0;
}