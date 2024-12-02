#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> cnt(26, 0);
  bool flag = true;
  int n = S.size();

  if (n % 2 == 1) flag = false;

  if (flag) rep(i, (n / 2)) if (S[2 * i] != S[2 * i + 1]) flag = false;

  if (flag) rep(i, n) cnt[S[i] - 'a']++;
  if (flag) rep(i, 26) if ((cnt[i] != 0) && (cnt[i] != 2)) flag = false;

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}