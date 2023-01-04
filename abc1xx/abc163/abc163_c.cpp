#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1);
  rep(i, N - 1) {
    int Ai;
    cin >> Ai;
    A[Ai]++;
  }
  rep(i, N) cout << A[i + 1] << endl;

  return 0;
}