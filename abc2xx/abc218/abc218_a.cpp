#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (S[N - 1] == 'o')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}