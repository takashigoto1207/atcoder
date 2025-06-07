#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A;
  set<int> st;
  rep(i, N) {
    cin >> A;
    st.insert(A);
  }

  cout << st.size() << endl;
  for (int x : st) cout << x << " ";
  cout << endl;
  return 0;
}