#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> P(N);
  rep(i, N) cin >> P[i];

  priority_queue<int, vector<int>, greater<int>> q;
  rep(i, K - 1) q.push(P[i]);
  for (int i = K - 1; i < N; i++) {
    q.push(P[i]);
    if (q.size() > K) q.pop();
    cout << q.top() << endl;
  }
  return 0;
}