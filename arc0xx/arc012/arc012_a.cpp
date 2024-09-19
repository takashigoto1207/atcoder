#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string day;
  cin >> day;

  map<string, int> mp;
  mp["Sunday"] = 0;
  mp["Monday"] = 5;
  mp["Tuesday"] = 4;
  mp["Wednesday"] = 3;
  mp["Thursday"] = 2;
  mp["Friday"] = 1;
  mp["Saturday"] = 0;
  cout << mp[day] << endl;
  return 0;
}