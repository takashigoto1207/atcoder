#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  long long K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> seen;
  vector<int> visited(N + 1, -1);

  int now = 1;
  rep(i, N) {
    if (visited[now] != -1) break;
    visited[now] = seen.size();
    seen.push_back(now);
    now = A[now - 1];
  }

  int a = seen.size() - visited[now];
  int b = visited[now];
  if (K < b)
    cout << seen[K] << endl;
  else
    cout << seen[b + ((K - b) % a)] << endl;

  return 0;
}