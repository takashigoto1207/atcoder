#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string X;
  int N;
  cin >> X >> N;

  vector<int> pos(26);
  rep(i, 26) pos[X[i] - 'a'] = i;

  vector<vector<int>> S(N);
  rep(i, N) {
    string s;
    cin >> s;
    for (char c : s) {
      S[i].push_back(pos[c - 'a']);
    }
  }

  sort(begin(S), end(S));
  for (vector<int> s : S) {
    for (int x : s) {
      cout << X[x];
    }
    cout << endl;
  }
  return 0;
}