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
  int d;
  rep(i, N) {
    cin >> d;
    st.insert(d);
  }

  cout << st.size() << endl;
  return 0;
}