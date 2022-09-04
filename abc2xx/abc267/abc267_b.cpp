#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string p = "x";
  if (S[6] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[3] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[1] == '1' || S[7] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[0] == '1' || S[4] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[2] == '1' || S[8] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[3] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[5] == '1')
    p += 'o';
  else
    p += 'x';
  if (S[9] == '1')
    p += 'o';
  else
    p += 'x';

  int xo = 0;
  rep(i, p.size() - 1) if (p[i] == 'x' && p[i + 1] == 'o') xo++;
  if (S[0] == '0' && 1 < xo)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}