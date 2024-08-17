#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  S = S.substr(0, 12);
  if (S == "WBWBWWBWBWBW")
    cout << "Do" << endl;
  else if (S == "WBWWBWBWBWWB")
    cout << "Re" << endl;
  else if (S == "WWBWBWBWWBWB")
    cout << "Mi" << endl;
  else if (S == "WBWBWBWWBWBW")
    cout << "Fa" << endl;
  else if (S == "WBWBWWBWBWWB")
    cout << "So" << endl;
  else if (S == "WBWWBWBWWBWB")
    cout << "La" << endl;
  else if (S == "WWBWBWWBWBWB")
    cout << "Si" << endl;
  return 0;
}