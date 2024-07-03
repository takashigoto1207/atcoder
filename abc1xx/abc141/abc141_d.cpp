#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  priority_queue<int> q;
  rep(i, N) {
    int A;
    cin >> A;
    q.push(A);
  }

  rep(i, M) {
    int x = q.top();
    q.pop();
    q.push(x / 2);
  }

  ll ans = 0;
  rep(i, N) {
    ans += q.top();
    q.pop();
  }
  cout << ans << endl;
  return 0;
}