#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[S.size() - 1] == 'r')
    cout << "er" << endl;
  else
    cout << "ist" << endl;
  return 0;
}