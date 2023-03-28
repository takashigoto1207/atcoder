#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  map<int, int> mp;
  int A;
  rep(i, Q) {
    cin >> A;
    mp[A]++;
  }

  rep(i, N) {
    if (K - Q + mp[i + 1] <= 0)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
  return 0;
}