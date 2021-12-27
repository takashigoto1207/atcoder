#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<int> st;

  for (int a = 1; a < 200; a++)
    for (int b = 1; b < 200; b++) st.insert(4 * a * b + 3 * a + 3 * b);

  int ans = 0;
  int S;
  rep(i, N) {
    cin >> S;
    if (st.count(S) == 0) ans++;
  }

  cout << ans << endl;
  return 0;
}