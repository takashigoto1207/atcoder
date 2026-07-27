#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> gift(N);
  int K, A;
  rep(i, N) {
    cin >> K;
    rep(j, K) {
      cin >> A;
      gift[A - 1].push_back(i + 1);
    }
  }

  rep(i, N) {
    cout << gift[i].size();
    for (int j : gift[i]) cout << " " << j;
    cout << endl;
  }
  return 0;
}