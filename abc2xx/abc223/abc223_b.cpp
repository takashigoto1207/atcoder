#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int n = S.size();
  vector<string> v(n + 1);
  rep(i, n + 1) v[i] = S.substr(i) + S.substr(0, i);
  sort(v.begin(), v.end());

  cout << v[0] << endl;
  cout << v[n] << endl;
  return 0;
}