#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  set<char> st;
  rep(i, S.size()) st.insert(S[i]);

  if (S.size() == st.size())
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}