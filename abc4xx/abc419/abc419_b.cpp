#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q, t, x;
  cin >> Q;
  vector<int> ball(101);

  rep(i, Q) {
    cin >> t;
    if (t == 1) {
      cin >> x;
      ball[x]++;
    } else {
      rep(j, 101) {
        if (ball[j] > 0) {
          ball[j]--;
          cout << j << endl;
          break;
        }
      }
    }
  }
  return 0;
}