#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int calc = 1 << N;

  vector<int> A(calc);
  rep(i, calc) cin >> A[i];
  int f = 0;
  int s = max(1, calc / 2 - 1);

  rep(i, calc / 2) if (A[f] < A[i]) f = i;
  for (int i = max(1, calc / 2 - 1); i < calc; i++)
    if (A[s] < A[i]) s = i;

  if (A[f] > A[s])
    cout << s + 1 << endl;
  else
    cout << f + 1 << endl;
  return 0;
}