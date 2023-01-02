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
  rep(i, N) {
    string S;
    cin >> S;
    st.insert(S);
  }

  cout << st.size() << endl;
  return 0;
}