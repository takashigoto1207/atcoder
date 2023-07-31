#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string wd = "ACE,BDF,CEG,DFA,EGB,FAC,GBD";
  cout << (wd.find(S) != string::npos ? "Yes" : "No") << endl;
}