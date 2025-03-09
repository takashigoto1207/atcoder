#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> win(N);

  string S;
  rep(i, N) {
    cin >> S;
    win[i] = {count(S.begin(), S.end(), 'o'), -i - 1};
  }
  sort(win.rbegin(), win.rend());
  rep(i, N) cout << -win[i].second << endl;
  return 0;
}