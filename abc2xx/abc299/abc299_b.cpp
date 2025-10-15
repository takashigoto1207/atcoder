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

  if (S.find('|') < S.find('*') && S.find('*') < S.rfind('|'))
    cout << "in" << endl;
  else
    cout << "out" << endl;
  return 0;
}