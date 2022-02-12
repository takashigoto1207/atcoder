#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  deque<int> ans = {N};
  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == 'L')
      ans.push_back(i);
    else
      ans.push_front(i);
  }

  rep(i, N + 1) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}