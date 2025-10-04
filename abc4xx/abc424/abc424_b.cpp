#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> participants(N, 0);
  vector<int> ans;

  rep(i, K) {
    int A, B;
    cin >> A >> B;
    participants[A - 1] += B;
    if (participants[A - 1] == M * (M + 1) / 2) ans.push_back(A);
  }
  for (int x : ans) cout << x << " ";
  cout << endl;
  return 0;
}