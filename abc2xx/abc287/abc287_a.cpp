#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  rep(i, N) {
    string S;
    cin >> S;
    if (S == "For") cnt++;
  }

  if (N / 2 < cnt)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}