#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (N % 2 == 0) {
    cout << -1 << endl;
    return 0;
  }

  array<char, 3> arr = {'a', 'b', 'c'};
  rep(i, N) {
    if (S[i] != arr[(i + N) % 3]) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << (N - 1) / 2 << endl;
  return 0;
}