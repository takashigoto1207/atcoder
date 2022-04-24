#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  bool upper = false, lower = false;
  set<char> st;
  rep(i, S.size()) {
    if (isupper(S[i])) upper = true;
    if (islower(S[i])) lower = true;
    st.insert(S[i]);
  }
  if (upper && lower && S.size() == st.size())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}