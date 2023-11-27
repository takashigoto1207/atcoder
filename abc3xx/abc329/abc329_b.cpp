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
  rep(i, N) {
    int A;
    cin >> A;
    st.insert(A);
  }

  vector<int> v(st.begin(), st.end());
  sort(v.rbegin(), v.rend());
  cout << v[1] << endl;
  return 0;
}