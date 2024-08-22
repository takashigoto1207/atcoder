#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int lower = 0, upper = 0;
  for (char c : S) islower(c) ? lower++ : upper++;

  if (lower < upper)
    for (char& c : S) c = toupper(c);
  else
    for (char& c : S) c = tolower(c);
  cout << S << endl;
  return 0;
}