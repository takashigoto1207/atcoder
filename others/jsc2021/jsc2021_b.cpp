#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> arr(1001);
  int j;
  rep(i, N + M) {
    cin >> j;
    arr[j]++;
  }

  rep(i, 1005) if (arr[i] == 1) cout << i << ' ';
  cout << endl;
  return 0;
}