#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  string T;
  set<string> st;
  rep(i, N) cin >> S[i];
  rep(i, M) cin >> T, st.insert(T);
  rep(i, N) {
    if (st.count(S[i]))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}