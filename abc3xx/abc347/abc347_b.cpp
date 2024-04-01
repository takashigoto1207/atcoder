#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  set<string> st;
  rep(i, S.size()) rep(j, S.size() - i) st.insert(S.substr(i, j + 1));
  cout << st.size() << endl;
  return 0;
}