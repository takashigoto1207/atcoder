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

  if (N != st.size())
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}