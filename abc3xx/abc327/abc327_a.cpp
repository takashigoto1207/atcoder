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

  rep(i, N - 1) if (S[i] == 'a' && S[i + 1] == 'b' ||
                    S[i] == 'b' && S[i + 1] == 'a') {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}