#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

bool sign(string S) { return S == "R G B" || S == "G B R" || S == "B R G"; }

int main() {
  string S, T;
  getline(cin, S);
  getline(cin, T);

  if (sign(S) == sign(T))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}