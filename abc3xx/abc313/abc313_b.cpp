#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<bool> is_lose(N, false);
  int A, B;
  rep(i, M) {
    cin >> A >> B;
    is_lose[B - 1] = true;
  }

  vector<int> champions;
  rep(i, N) if (!is_lose[i]) champions.push_back(i + 1);

  if (champions.size() == 1)
    cout << champions[0] << endl;
  else
    cout << -1 << endl;
  return 0;
}
