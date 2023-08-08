#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  set<int> st;
  for (int i = A; i <= min(A + K - 1, B); i++) st.insert(i);
  for (int i = max(A, B - K + 1); i <= B; i++) st.insert(i);

  for (int x : st) cout << x << endl;
  return 0;
}