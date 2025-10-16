#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  string T;
  cin >> T;

  set<pair<int, int>> st;
  X--, Y--;
  rep(i, T.size()) {
    if (T[i] == 'U' && S[X - 1][Y] != '#') {
      if (S[X - 1][Y] == '@') st.insert(pair<int, int>(X - 1, Y));
      X -= 1;
    }
    if (T[i] == 'D' && S[X + 1][Y] != '#') {
      if (S[X + 1][Y] == '@') st.insert(pair<int, int>(X + 1, Y));
      X += 1;
    }
    if (T[i] == 'L' && S[X][Y - 1] != '#') {
      if (S[X][Y - 1] == '@') st.insert(pair<int, int>(X, Y - 1));
      Y -= 1;
    }
    if (T[i] == 'R' && S[X][Y + 1] != '#') {
      if (S[X][Y + 1] == '@') st.insert(pair<int, int>(X, Y + 1));
      Y += 1;
    }
  }

  cout << ++X << " " << ++Y << " " << st.size() << endl;
  return 0;
}