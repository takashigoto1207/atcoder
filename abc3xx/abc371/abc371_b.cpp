#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> c(N, 0);
  vector<string> ans;
  int A;
  char B;

  rep(i, M) {
    cin >> A >> B;
    if (c[A - 1] == 0 && B == 'M')
      ans.push_back("Yes");
    else
      ans.push_back("No");
    if (B == 'M') c[A - 1]++;
  }

  for (string x : ans) cout << x << endl;
  return 0;
}