#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<string> st;
  rep(i, N) {
    string S, T;
    cin >> S >> T;
    st.insert(S + "," + T);
  }

  if (st.size() != N)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}