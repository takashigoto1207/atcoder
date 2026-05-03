#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  map<char, int> mp;
  for (char c : S) mp[c]++;

  if ((mp['N'] > 0 && mp['S'] == 0) || (mp['N'] == 0 && mp['S'] > 0) ||
      (mp['W'] > 0 && mp['E'] == 0) || (mp['W'] == 0 && mp['E'] > 0))
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}