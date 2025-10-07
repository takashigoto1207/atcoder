#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N;

  vector<int> station(N, 0);
  rep(i, N - 1) {
    cin >> D;
    station[i + 1] = station[i] + D;
  }

  rep(i, N) {
    for (int j = i; j < N - 1; j++) cout << station[j + 1] - station[i] << " ";
    cout << endl;
  }
  return 0;
}