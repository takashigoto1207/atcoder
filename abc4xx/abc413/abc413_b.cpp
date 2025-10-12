#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  set<string> st;
  rep(i, N) for (int j = i + 1; j < N; j++) st.insert(S[i] + S[j]),
      st.insert(S[j] + S[i]);
  cout << st.size() << endl;
  return 0;
}