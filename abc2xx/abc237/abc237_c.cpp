#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int n = S.size();
  int l = 0, r = n - 1;
  while (l < r && S[l] == 'a' && S[r] == 'a') l++, r--;
  while (l < r && S[r] == 'a') --r;
  while (l < r && S[l] == S[r]) l++, r--;

  if (l >= r)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}