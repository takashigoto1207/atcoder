#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int sum(string n) {
  int x = 0;
  rep(i, 3) x += (n[i] - '0');
  return x;
}

int main() {
  string A, B;
  cin >> A >> B;
  cout << max(sum(A), sum(B)) << endl;
  return 0;
}