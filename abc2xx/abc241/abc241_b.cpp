#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  map<int, int> mp;
  int A, B;
  cin >> N >> M;

  rep(i, N) cin >> A, mp[A]++;

  rep(i, M) {
    cin >> B;
    if (mp[B] == 0) {
      cout << "No" << endl;
      return 0;
    }
    mp[B]--;
  }
  cout << "Yes" << endl;
  return 0;
}