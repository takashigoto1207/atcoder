#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s(N), t(N);
  map<string, int> mp;
  rep(i, N) {
    cin >> s[i] >> t[i];
    mp[s[i]]++;
    if (s[i] != t[i]) mp[t[i]]++;
  }

  rep(i, N) {
    if (mp[s[i]] > 1 && mp[t[i]] > 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}