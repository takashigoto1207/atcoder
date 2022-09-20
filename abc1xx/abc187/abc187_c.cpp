#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<string> st;
  string S;
  rep(i, N) cin >> S, st.insert(S);

  for (auto x : st) {
    if (st.find("!" + x) != st.end()) {
      cout << x << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}