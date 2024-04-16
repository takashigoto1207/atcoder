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
  map<int, int> mp2;
  for (char x : S) mp[x]++;
  for (auto x : mp) mp2[x.second]++;

  for (auto x : mp2) {
    if (x.second % 2 || x.second > 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}