#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  map<int, int> mp;
  rep(i, N) {
    if (mp[A[i]] == 0) {
      cout << "-1 ";
      mp[A[i]] = i + 1;
    } else {
      cout << mp[A[i]] << " ";

      mp[A[i]] = i + 1;
    }
  }
  cout << endl;
  return 0;
}