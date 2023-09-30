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
  int A;
  rep(i, N) {
    cin >> A;
    if (st.find(A) != st.end())
      st.erase(A);
    else
      st.insert(A);
  }
  cout << st.size() << endl;
  return 0;
}