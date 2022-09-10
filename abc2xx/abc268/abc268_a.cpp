#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x;
  set<int> st;

  rep(i, 5) {
    cin >> x;
    st.insert(x);
  }

  cout << st.size() << endl;
  return 0;
}