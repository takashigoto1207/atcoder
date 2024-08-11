#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, T, A;
  cin >> N >> T >> A;

  if (N / 2 < max(T, A))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}