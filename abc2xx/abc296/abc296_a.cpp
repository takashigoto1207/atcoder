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

  rep(i, N - 1) {
    if (S[i] == 'M' && S[i + 1] == 'M' || S[i] == 'F' && S[i + 1] == 'F') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}