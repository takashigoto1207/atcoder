#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q, Xi, cnt = 0;
  string S;
  char Ci;
  cin >> N >> Q >> S;

  rep(i, N - 2) if (S[i] == 'A' and S[i + 1] == 'B' and S[i + 2] == 'C') cnt++;
  vector<int> ans;
  rep(i, Q) {
    cin >> Xi >> Ci, Xi--;
    for (int i = max(0, Xi - 2); i <= Xi; i++)
      cnt -= (S[i] == 'A' and S[i + 1] == 'B' and S[i + 2] == 'C');
    S[Xi] = Ci;
    for (int i = max(0, Xi - 2); i <= Xi; i++)
      cnt += (S[i] == 'A' and S[i + 1] == 'B' and S[i + 2] == 'C');
    ans.push_back(cnt);
  }

  for (int x : ans) cout << x << endl;
  return 0;
}