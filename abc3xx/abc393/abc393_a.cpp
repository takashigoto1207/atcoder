#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S1, S2;
  cin >> S1 >> S2;

  if (S1 == "sick" && S2 == "sick")
    cout << "1" << endl;
  else if (S1 == "sick" && S2 == "fine")
    cout << "2" << endl;
  else if (S1 == "fine" && S2 == "sick")
    cout << "3" << endl;
  else
    cout << "4" << endl;
  return 0;
}