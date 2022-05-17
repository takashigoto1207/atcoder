#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, T;
  string S;
  set<string> st;
  int ans = 0, score = 0;
  cin >> N;

  rep(i, N) {
    cin >> S >> T;
    if (st.count(S) == 0) {
      if (score < T) {
        score = T;
        ans = i + 1;
      }
      st.insert(S);
    }
  }
  cout << ans << endl;
  return 0;
}