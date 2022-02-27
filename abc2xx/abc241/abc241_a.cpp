#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  vector<int> a(10);
  rep(i, 10) cin >> a[i];

  cout << a[a[a[0]]] << endl;
  return 0;
}