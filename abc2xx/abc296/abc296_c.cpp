#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;
  set<int> st;
  rep(i, N) {
    int A;
    cin >> A;
    st.insert(A);
  }

  for (auto a : st) {
    if (st.find(a + X) != st.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}