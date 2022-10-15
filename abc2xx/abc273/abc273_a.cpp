#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int f(int k) {
  if (k == 0)
    return 1;
  else
    return k * f(k - 1);
}

int main() {
  int N;
  cin >> N;

  cout << f(N) << endl;
  return 0;
}