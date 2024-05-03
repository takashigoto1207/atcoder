#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<int> st;
  int ans = 0;
  rep(i, N) {
    int A;
    cin >> A;
    if (st.find(A) != st.end()) ans++;
    st.insert(A);
  }

  cout << ans << endl;
  return 0;
}