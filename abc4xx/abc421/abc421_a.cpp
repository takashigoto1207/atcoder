#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int X;
  string Y;
  cin >> X >> Y;

  if (S[X - 1] == Y)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}