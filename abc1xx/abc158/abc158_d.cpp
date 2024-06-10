#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int Q;
  cin >> S >> Q;
  string front, back;
  bool flg = true;
  rep(i, Q) {
    int T;
    cin >> T;
    if (T == 1) flg = !flg;
    if (T == 2) {
      int F;
      char C;
      cin >> F >> C;
      if ((flg && F == 1) || (!flg && F == 2)) {
        front.push_back(C);
      } else {
        back.push_back(C);
      }
    }
  }

  if (flg) {
    reverse(front.begin(), front.end());
    cout << front + S + back << endl;
  } else {
    reverse(back.begin(), back.end());
    reverse(S.begin(), S.end());
    cout << back + S + front << endl;
  }
  return 0;
}