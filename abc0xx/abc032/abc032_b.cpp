#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  int k;
  cin >> s >> k;

  set<string> st;
  rep(i, (int)s.length() - k + 1) st.insert(s.substr(i, k));

  cout << st.size() << endl;
  return 0;
}