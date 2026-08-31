#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;

  vector<string> ans;
  int cnta = 0, cntb = 0;
  rep(i, N) {
    if (S[i] == 'a' && cnta + cntb < A + B)
      ans.push_back("Yes"), cnta++;
    else if (S[i] == 'b' && cnta + cntb < A + B && cntb < B)
      ans.push_back("Yes"), cntb++;
    else
      ans.push_back("No");
  }
  rep(i, N) cout << ans[i] << endl;
  return 0;
}