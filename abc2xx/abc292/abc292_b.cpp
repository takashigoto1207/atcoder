#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> p(N, 0);
  vector<string> ans;
  rep(i, Q) {
    int c, x;
    cin >> c >> x;
    if (c == 1) p[x - 1]++;
    if (c == 2) p[x - 1] += 2;
    if (c == 3) {
      if (2 <= p[x - 1])
        ans.push_back("Yes");
      else
        ans.push_back("No");
    }
  }
  for (string x : ans) cout << x << endl;
  return 0;
}