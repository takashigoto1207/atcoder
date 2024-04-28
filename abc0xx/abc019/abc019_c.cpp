#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  set<int> st;
  rep(i, N) {
    while (a[i] % 2 == 0) a[i] /= 2;
    st.insert(a[i]);
  }
  cout << st.size() << endl;
  return 0;
}