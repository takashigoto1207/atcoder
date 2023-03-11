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

  string T = S.substr(0, N / 2);
  if (T + T == S)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}