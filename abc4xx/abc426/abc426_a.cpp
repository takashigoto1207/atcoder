#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string X, Y;
  cin >> X >> Y;

  map<string, int> mp;
  mp["Ocelot"] = 1;
  mp["Serval"] = 2;
  mp["Lynx"] = 3;

  if (mp[X] >= mp[Y])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}