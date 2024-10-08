#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int len = S.size();
  if (S[len - 3] == 's' && S[len - 2] == 'a' && S[len - 1] == 'n')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}