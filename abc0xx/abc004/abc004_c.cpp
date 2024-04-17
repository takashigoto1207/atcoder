#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> v = {1, 2, 3, 4, 5, 6};
  N %= 30;
  rep(i, N) {
    int j = i % 5;
    swap(v[j], v[j + 1]);
  }
  for (int x : v) cout << x;
  cout << endl;
  return 0;
}