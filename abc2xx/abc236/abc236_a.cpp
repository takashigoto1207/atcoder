#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  int a, b;
  cin >> S >> a >> b;

  swap(S[a - 1], S[b - 1]);
  cout << S << endl;
  return 0;
}