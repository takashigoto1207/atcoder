#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string Name;
  cin >> Name;
  string s = Name;
  reverse(Name.begin(), Name.end());
  if (s == Name)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}