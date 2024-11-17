#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> cnt;
  rep(i, S.size()) if (S[i] == '|') cnt.push_back(i);
  rep(i, cnt.size() - 1) cout << cnt[i + 1] - cnt[i] - 1 << " ";
  cout << endl;
  return 0;
}