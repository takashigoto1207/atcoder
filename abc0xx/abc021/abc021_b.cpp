#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, a, b, K, P;
  cin >> N >> a >> b >> K;

  set<int> st;
  st.insert(a);
  st.insert(b);

  rep(i, K) {
    cin >> P;
    st.insert(P);
  }

  if (st.size() == K + 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}