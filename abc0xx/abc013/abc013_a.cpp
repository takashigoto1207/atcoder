#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<char, int> mp;
  mp['A'] = 1;
  mp['B'] = 2;
  mp['C'] = 3;
  mp['D'] = 4;
  mp['E'] = 5;

  char X;
  cin >> X;

  cout << mp[X] << endl;
  return 0;
}