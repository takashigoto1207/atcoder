#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  set<string> st;
  rep(i, 4) cin >> s, st.insert(s);

  if (st.size() == 4)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}