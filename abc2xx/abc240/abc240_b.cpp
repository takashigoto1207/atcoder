#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, a;
  set<int> st;
  cin >> N;

  rep(i, N) cin >> a, st.insert(a);
  cout << st.size() << endl;
  return 0;
}