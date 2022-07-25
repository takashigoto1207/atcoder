#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  vector<string> ans;
  rep(i, N) {
    string S;
    cin >> S;
    if (mp[S] == 0) {
      ans.emplace_back(S);
      mp[S]++;
    } else {
      ans.emplace_back(S + "(" + to_string(mp[S]) + ")");
      mp[S]++;
    }
  }

  for (string x : ans) cout << x << endl;
  return 0;
}