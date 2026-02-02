#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;
  vector<int> A(Q);
  rep(i, Q) cin >> A[i];

  int vol = 0;
  bool song = false;

  vector<string> ans(Q);
  rep(i, Q) {
    if (A[i] == 1)
      vol++;
    else if (A[i] == 2)
      vol = max(0, vol - 1);
    else
      song = !song;

    if (vol >= 3 && song)
      ans[i] = "Yes";
    else
      ans[i] = "No";
  }

  for (string x : ans) cout << x << endl;
  return 0;
}